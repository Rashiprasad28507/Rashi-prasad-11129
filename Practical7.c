//Program to calculate area of circle
#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14;
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
