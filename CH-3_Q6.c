//Write a C program to check whether a given character is a lowercase alphabet or not.
#include<stdio.h>

int main(){

    char ch = 'C';
    printf("the value of character is %d\n", ch);

    if(ch>=97 && ch<=122){
        printf("the character is lowercaaase\n");
    }
    else{
        printf("the charcter is not lowercase\n");
    }
    
    return 0;
}