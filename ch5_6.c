// Write a C program to find the maximum of two numbers using a function.
#include<stdio.h>

int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    printf("Max = %d", max(10, 20));
    return 0;
}
