// 3. Write a program to check whether a given number is an even number or an odd 
// number
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x % 2 == 0)
    {
        printf("even number ");
    }
    else
    {
        printf("odd number");
    }
}