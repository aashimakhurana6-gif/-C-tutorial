// Write a C program to find the square of a number using a function.
#include<stdio.h>

int square(int n){
    return n*n;
}

int main(){
    int n = 5;
    printf("Square = %d", square(n));
    return 0;
}
