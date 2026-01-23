// Write a C program to find the sum of first n natural numbers using recursion.
#include<stdio.h>

int sum(int n){
    if(n == 1)
        return 1;
    return n + sum(n-1);
}

int main(){
    printf("Sum = %d", sum(5));
    return 0;
}
