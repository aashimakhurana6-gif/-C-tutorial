/*Write a C program to take marks of three subjects (marks1, marks2, marks3) as input from the user. Then, determine whether the student has passed or failed based on the following rules:

The student fails if marks in any individual subject are less than 33.

The student fails if the average of the three subjects is less than 40.

Otherwise, the student passes.

Print appropriate messages for each case, along with the marks entered.
*/

#include<stdio.h>

int main(){
    int marks1, marks2, marks3;

    printf("enetr marks1\n");
    scanf("%d", &marks1);

    printf("enetr marks2\n");
    scanf("%d", &marks2);

    printf("enetr marks3\n");
    scanf("%d", &marks3);

    printf("the marks are %d %d and %d\n", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("you are failed due to less marks in individual subjects\n");
    }
    else if((marks1 + marks2 + marks3)/3 <40){
        printf("you are  failed due to less percentage\n");
    }
    else{
        printf("you are passed\n");
    }

    return 0;
}