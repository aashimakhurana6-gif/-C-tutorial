//Write a C program to find the sum of the first 10 natural numbers using a do-while loop.
#include<stdio.h>

int main(){

    int i = 1;
    int sum = 0;
    
   do{
        sum +=i;
        i++;

    }while(i<=10);
    printf("the value of first 10 natural number is %d", sum);
    
    
    return 0;
}  