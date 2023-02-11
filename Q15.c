// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("positive");
    }
    else
    {
        if(num == 0)
        {
            printf("zero");
        }
        else
        {
            printf("negative");
        }
    }
}