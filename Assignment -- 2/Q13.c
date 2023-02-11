// 13. Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right

#include<stdio.h>
void main()
{
    int a , b , c;
printf("enter the number : ");
scanf("%d",&a);
b = a % 10;
c = a / 10;
a = b * 100 + c;
printf("%d",a);

}