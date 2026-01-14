// Write a C program to find the average of three numbers using a user-defined function.
#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){

    return (a + b + c)/3.0;
}


int main(){
    int a = 3, b = 7, c = 7;
    printf("the average of three numbers is %f", average(a, b, c));

    return 0;
}