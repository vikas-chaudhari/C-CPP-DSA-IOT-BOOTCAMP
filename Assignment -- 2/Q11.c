// 11. Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349)

#include<stdio.h>
void main()
{
    int num , digit ;

printf("enter the number : ");
scanf("%d",&num);
printf("Enter the digit to append : ");
scanf("%d",&digit);
num = num * 10 + digit;
printf("%d",num);
}
