//WAP to input 4 digits, form a 4-digit number, and find the sum of its digits.
#include<stdio.h>

int main(){

    int first_digit, second_digit, third_digit, last_digit, x, sum_of_digit;

    printf("Enter the value of first digit\n");
    scanf("%d", &first_digit);

    printf("Enter the value of second digit\n");
    scanf("%d", &second_digit);

    printf("Enter the value of third digit\n");
    scanf("%d", &third_digit);

    printf("Enter the value of fourth digit\n");
    scanf("%d", &last_digit);

    x = first_digit*1000 + second_digit*100 + third_digit*10 + last_digit;
    printf("the number is %d\n", x);

    sum_of_digit = first_digit + last_digit;
    printf("the sum of its digit is %d\n", sum_of_digit);

    return 0;
}  