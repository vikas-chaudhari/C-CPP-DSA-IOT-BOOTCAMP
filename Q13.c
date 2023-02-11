// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x % 3 == 0 && x % 2 == 0)
    {
        printf("number is divisible by 3 and divisible by 2. ");
    }
    else
    {
        printf("not divisible");
    }
}