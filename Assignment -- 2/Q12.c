// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
// convert it into USD

#include<stdio.h>
int main()
{
    float usd = 76.23 , inr , amount;
    printf("enter inr amount : ");
    scanf("%f", &inr);

    amount = inr / usd;
    
    printf("INR to USD is : %f",amount);

}