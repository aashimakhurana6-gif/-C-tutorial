//WAP to read a five-digit number and print the number obtained by adding 11111 to it.
#include<stdio.h>

int main(){

    int five_digit_number, new_number;

    printf("Enter five digit number\n");
    scanf("%d", &five_digit_number);

    new_number = five_digit_number + 11111;

    printf("the new number is %d\n", new_number);

    return 0;
}  