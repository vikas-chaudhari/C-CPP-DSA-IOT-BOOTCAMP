// 7. Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a , b , c , root ;
    printf("enter the value for a : ");
    scanf("%d",&a);
    printf("enter the value for b : ");
    scanf("%d",&b);
    printf("enter the value for c : ");
    scanf("%d",&c);
    root = b*b - 4*a*c;
    if(root < 0)
    {
        printf("roots are imaginary for %d",root);
    }
    else
    {
        if (root == 0)
        {
            printf("roots are real and equal for %d",root);
        }
        else
        {
            printf("roots are real and distinct for %d",root);
        }
    }
}