// 18. Write a program which takes the month number as an input and display number of 
// days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month : ");
    scanf("%d",&month);
    if(month <= 12)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            printf("31");
        }
        else
        {
            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                printf("30");
            }
            else if(month == 2)
            {
                printf("28");
            }     
        }
    }
    else
    {
        printf("wrong input");
    }
       
    
}