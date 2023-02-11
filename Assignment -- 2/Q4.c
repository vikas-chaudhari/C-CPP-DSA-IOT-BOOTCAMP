// 4. Write a program to swap values of two int variables without using a third variable.


#include<stdio.h>
int main()
{
    int x = 10 , m = 20 ;
    x  = m + x ;
    m = x - m ;
    x = x - m ;
    printf("%d  %d", x , m);
}