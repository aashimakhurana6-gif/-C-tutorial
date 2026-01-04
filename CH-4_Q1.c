//Write a C program to print the multiplication table of a given number up to 10 using a for loop.
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
