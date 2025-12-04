/*
Write a C program to calculate the income tax based on the following rules:

Income up to ₹2,50,000 → no tax.

Income from ₹2,50,001 to ₹5,00,000 → 5% of the amount exceeding ₹2,50,000.

Income from ₹5,00,001 to ₹10,00,000 → 5% of ₹2,50,000 + 20% of the amount exceeding ₹5,00,000.

Income above ₹10,00,000 → 5% of ₹2,50,000 + 20% of ₹5,00,000 + 30% of the amount exceeding ₹10,00,000.*/

#include<stdio.h>

int main(){
    int income;
    printf("enter income\n");
    scanf("%d", &income);

    int tax = 0;
     if(income<=250000){
        tax = 0;
     }
     else if(income<250000 && income>=500000){
        tax = 0.05*(income - 250000);
     }
     else if(income<500000 && income>=1000000){
        tax = 0.05*(500000 - 250000) + 0.2*(income - 500000);
     }
     else{
        tax = 0.05*(500000 - 250000) + 0.2*(1000000 - 500000) + 0.3*(income - 1000000);
     }
     printf("the total tax you need to pay is %d", tax);
    

    return 0;
}