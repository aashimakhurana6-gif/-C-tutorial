//Write a C program to print the multiplication table of 10 in reverse order using a for loop.
#include<stdio.h>

int main(){

    int n = 10;
    for(int i = 10; i; i--)
    {
        printf("%d x %d = %d\n", n, i, i*n);
    }
    return 0;
}  