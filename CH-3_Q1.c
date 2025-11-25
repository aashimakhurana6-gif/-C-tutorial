/*
Write a C program to input marks and print the grade using the following rules:
A: 90–100, B: 80–89, C: 70–79, D: 60–69, E: 50–59, F: below 50.
*/
#include<stdio.h>

int main(){
    char grade;
    int marks = 45;
    if(marks<=100 && marks>=90){
        grade = 'A';
    }
    else if(marks<=90 && marks>=80){
        grade = 'B';
    }
    else if(marks<=80 && marks>=70){
        grade = 'C';
    }
    else if(marks<=70 && marks>=60){
        grade = 'D';
    }
    else if(marks<=60 && marks>=50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }

    return 0;
}