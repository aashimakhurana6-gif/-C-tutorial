//to input 5 digits, form a number from them, and find the sum of the digits and reverse it.
#include<stdio.h>

int main(){

    int a, b, c, d, e, x, sum;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    printf("Enter the value of d\n");
    scanf("%d", &d);

    printf("Enter the value of e\n");
    scanf("%d", &e);

    x = e*10000 + d*1000 + c*100 + b*10 + a;
    printf("the  five digit number is %d\n", x);

    sum = a + b + c + d + e;
    printf("the reverse number is %d\n", sum);

    return 0;
}  