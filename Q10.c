// 10. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int cost , sp , val ;
    printf("\nenter the cost of product : ");
    scanf("%d",&cost);
    printf("\nenter the selling price of product : ");
    scanf("%d",&sp);
    val = (sp - cost)/100;
    if(val > 0)
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
    
}