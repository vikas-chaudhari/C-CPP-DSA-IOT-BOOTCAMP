// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int x , a , b , c , sum ;
    printf("Enter the three digit number : ");
    scanf("%d", &x);
    a = x % 10 ;
    x = x / 10 ;
    b = x % 10 ;
    x = x / 10 ;
    c = x % 10 ; 
    printf("a = %d  b = %d   c = %d" , a , b , c );
    sum = a + b + c ;
    printf("\nsum is  : %d", sum);
}