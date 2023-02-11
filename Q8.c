// 8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x % 4 == 0)
    {
        printf("%d is leap year",x);
    }
    else
    {
        printf("%d is not a leap year",x);
    }
}