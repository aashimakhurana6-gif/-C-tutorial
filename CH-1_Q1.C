// Find percentage of marks obtained in 5 subjects and take marks as input from keyboard
#include<stdio.h>

int main(){
    
    int marks_in_english, marks_in_math, marks_in_science, marks_in_sst, marks_in_hindi, total_marks;

    printf("Enter marks in english\n");
    scanf("%d", &marks_in_english);

    printf("Enter marks in math\n");
    scanf("%d", &marks_in_math);

    printf("Enter marks in science\n");
    scanf("%d", &marks_in_science);

    printf("Enter marks_in_sst\n");
    scanf("%d", &marks_in_sst);

    printf("Enter marks in hindi\n");
    scanf("%d", &marks_in_hindi);

    total_marks = marks_in_english + marks_in_math + marks_in_science + marks_in_sst + marks_in_hindi;
    
    printf("Total marks obtained is %d\n", total_marks);

    float percentage = (total_marks/500.0)*100.0;
    printf("percentage of marks obtained is %f", percentage);
    
    return 0;
} 
