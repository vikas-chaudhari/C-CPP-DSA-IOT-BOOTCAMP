// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
//result in below given format.

#include<stdio.h>
int main()
{
    int R ;
    float pi = 3.14 , A ;
    printf("Enter the radius of circle : ");
    scanf("%d", &R);
    A = pi * R * R ;
    printf("Area of circle is %f having the radius %d", A , R );
    return 0 ;

}