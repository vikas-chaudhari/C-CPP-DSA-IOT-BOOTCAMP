// 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int x ;
    printf("enter the number to check : ");
    scanf("%d",&x);
    if(x % 5 == 0)
    {
        printf("divisible by 5 ");
    }
    else
    {
        printf("not divisible by 5");
    }
}