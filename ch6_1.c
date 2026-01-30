//Write a C program to print the address and value of an integer variable using a pointer
#include<stdio.h>

int main(){

    int i = 6;
    int* ptr = &i;

    printf("the address of i is %u\n", &i);
    printf("the value of i is %d\n", *ptr);

    return 0;
}