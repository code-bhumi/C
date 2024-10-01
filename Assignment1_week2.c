// Peer-graded Assignment: Fix Dr. P’s mistake (week 2)

#include<stdio.h>

#define PI 3.14159

int main()
{ 
    double volume , radius;
    printf("Enter radius : ");
    scanf("%lf", &radius);
    volume = 4*PI*radius*radius*radius/3;
    printf("volume is %lf cubic meters \n", volume);

    return 0;

}