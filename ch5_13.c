//Write a C program to reverse a number using recursion.
#include<stdio.h>

int rev = 0;

int reverse(int n){
    if(n == 0)
        return rev;
    rev = rev*10 + n%10;
    return reverse(n/10);
}

int main(){
    printf("Reverse = %d", reverse(1234));
    return 0;
}
