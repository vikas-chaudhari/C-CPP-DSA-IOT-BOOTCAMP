// 6. Write a program to print greater between two numbers. Print one number of both are 
// the same.
#include<stdio.h>
int main()
{
    int x , y ;
    printf("enter the first number number : ");
    scanf("%d",&x);
    printf("enter the second number  : ");
    scanf("%d",&y);

    if(x > y)
    {
        printf(" %d is greater number ", x);
    }
    else
    {
        printf(" %d is greater number ", y);
    }
}