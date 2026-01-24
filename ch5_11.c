// Write a C program to find power of a number using recursion.
#include<stdio.h>

int power(int x, int y){
    if(y == 0)
        return 1;
    return x * power(x, y-1);
}

int main(){
    printf("Power = %d", power(2, 3));
    return 0;
}
