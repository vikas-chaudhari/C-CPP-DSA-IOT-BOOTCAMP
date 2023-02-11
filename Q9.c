// 9. Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("enter the value for a : ");
    scanf("%d",&a);
    printf("enter the value for b : ");
    scanf("%d",&b);
    printf("enter the value for c : ");
    scanf("%d",&c);
    
    if(a > b && a > c)
    {
        printf("a = %d is greater number", a);
    }
    else
    {
        if(b > a && b > c)
        {
            printf("b = %d is greater number", b);
        }
        else
        {
            printf("c = %d is greater number", c);
        }
    }
}