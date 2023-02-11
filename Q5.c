// 5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x > 99 && x < 1000)
    {
        printf("three-digit number ");
    }
    else
    {
        printf("not a three-digit number  ");
    }
}