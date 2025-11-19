//find area of rectangle and circle and take input from keyboard


#include<stdio.h>

int main(){

    int length, breath, radius;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breath\n");
    scanf("%d", &breath);

    printf("Enter radius\n");
    scanf("%d", &radius);

    int area_of_rectangle = length*breath;
    printf("area of rectangle is %d\n", area_of_rectangle);

    float area_of_circle = 3.14*radius*radius;
    printf("area of circle is %f\n", area_of_circle);

    return 0;
}
