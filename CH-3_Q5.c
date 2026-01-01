//Write a C program to check whether a given year is a leap year or not.
#include<stdio.h>

int main(){

    int year;
    printf("Enter year\n");
    scanf("$d", &year);
     if((year%4==0 && year%100!=0) || year%400==0){
        printf("This is a leap year");
     }
     else{
        printf("This is not a leap year");
     }
    
    return 0;
}