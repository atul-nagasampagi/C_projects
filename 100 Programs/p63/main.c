#include <stdio.h>
#include <math.h>

int main() {
    float side1,side2,side3;

    printf("Enter the length of the 3 sides of the triangle:\n");
    printf("Side 1:\n");
    scanf("%f",&side1);
    printf("Side 2:\n");
    scanf("%f",&side2);
    printf("Side 3:\n");
    scanf("%f",&side3);

    calc_area(side1,side2,side3);


    return 0;
}

void calc_area(float a, float b, float c) {
    double s = (a + b + c)/2;
    double area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %f\n",area);
}
