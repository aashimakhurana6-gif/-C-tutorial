//Write a C program to find the sum of the multiplication table of 8 from 1 to 10 using a for loop.

#include<stdio.h>

int main(){
    int sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("the sum of the table of 8 is %d", sum);
    return 0;
}
