// 16. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character.
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
        {
            if(m >= '0' && m <= '9' )
            {
                printf("Digit");                
            }
            else
            {
                printf("special character");
            }
        }
    }
}