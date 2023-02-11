// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed

#include<stdio.h>
int main()
{
    int a , b , c , d , e ;
    printf("enter the marks for a : ");
    scanf("%d",&a);
    printf("enter the marks for b : ");
    scanf("%d",&b);
    printf("enter the marks for c : ");
    scanf("%d",&c);
    printf("enter the marks for d : ");
    scanf("%d",&d);
    printf("enter the marks for e : ");
    scanf("%d",&e);
    
    if(a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33 )
    {
        printf("passed");
    }
    else
    {
        printf("failed");
    }
}