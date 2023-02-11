// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x % 3 == 0 || x % 7 == 0)
    {
        printf("number is divisible by 3 or divisible by 7 ");
    }
    else
    {
        printf("not divisible");
    }
}