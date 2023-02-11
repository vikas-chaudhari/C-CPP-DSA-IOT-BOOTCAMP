// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char m ;
    printf("enter the alphabet to check : ");
    scanf("%c",&m);
    if(m >= 'a' && m <= 'z')
    {
        printf("lowercase ");
    }
    else
    {
        if(m >= 'A' && m <= 'Z')
            printf("uppercase ");
        else
            printf("wrong input");
    }
}