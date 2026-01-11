//Write a C program to calculate the factorial of 6 using a while loop.

#include<stdio.h>

int main(){

    int i = 1;
    int product = 1;
    int n = 6;
    while(i <= n)
    {
        product *=i;
        i++;    
    }

    printf("the facctorial of 6 is %d", product);
    return 0;
}  