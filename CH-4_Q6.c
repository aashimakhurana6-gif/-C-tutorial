//Write a C program to calculate the factorial of 6 using a for loop.

#include<stdio.h>

int main(){

    int product = 1;
    int n = 6;
    for(int i = 1; i<=n;  i++)
    {
        product *=i;    
    }

    printf("the facctorial of 6 is %d", product);
    return 0;
}  