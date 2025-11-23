//WAP to input 5 digits, form a number from them, and find the sum of the digits.
#include <stdio.h>

int main() {
    int a, b, c, d, e, num, sum;

    printf("Enter 5 digits: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    num = a*10000 + b*1000 + c*100 + d*10 + e;
    sum = a + b + c + d + e;

    printf("Number = %d\n", num);
    printf("Sum of digits = %d\n", sum);

    return 0;
}
