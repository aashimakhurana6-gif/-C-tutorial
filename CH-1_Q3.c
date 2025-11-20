//take input from keyboards of the distance in KM and convert it into M, CM, Inch, Feet


#include<stdio.h>

int main(){
    int distance;

    printf("Enter distance\n");
    scanf("%d", &distance);

    int distance_in_meters = distance*1000;
    printf("distance in meters is %d\n", distance_in_meters);

    int distance_in_centimeters = distance*100000;
    printf("distance in centimeters is %d\n", distance_in_centimeters);

    int distance_in_inches = distance*39370;
    printf("distance in inches is %d\n", distance_in_inches);

    int distnace_in_feet = distance*3280;
    printf("distance in feet is %d\n", distnace_in_feet);
    
    return 0;
}