// 4. Write a program to check whether a given number is an even number or an odd 
// number without using % operator
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x & 1)
    {
        printf("\nodd number");
    }
    else
    {
        printf("\neven number ");
    }
}