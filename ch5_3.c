// Write a C program to convert temperature from Celsius to Fahrenheit using a user-defined function.
#include<stdio.h>

float c2f(float);
float c2f(float c){
    return ((9*c)/5)+ 32;
}

int main(){
    float c = 45;
    printf(" the value fahrenheit is %.2f", c2f(c));

    return 0;
}