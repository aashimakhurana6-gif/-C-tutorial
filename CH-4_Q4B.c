//Write a C program to find the sum of the first 10 natural numbers using a for loop.
#include<stdio.h>

int main(){

    int sum = 0;
    for(int i = 1; i<=10;  i++)
    {
        sum += i;    
    }

    printf("the value of first 10 natural number is %d", sum);
    return 0;
}  