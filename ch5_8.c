//Write a C program to find factorial using a function.
#include<stdio.h>

int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++)
        f = f*i;
    return f;
}

int main(){
    printf("Factorial = %d", fact(5));
    return 0;
}
