/*

Problem 1:
Write a program that reads radius of circle from user and displays
the area of circle.(By user defined function).
Sample Run:
Enter radius: 5
Area of circle : 78.5

*/

// Program that reads the radius of circle and display its area

#include <stdio.h>
#include <math.h>

void circleArea(int r);

int main()
{

    int radius;

    printf("Enter Radius of circle: ");
    scanf("%d", &radius);

    circleArea(radius);

    return 0;
}

void circleArea(int r)
{

    float area;
    area = (float)(3.14) * pow(r, 2);

    printf("Area of Circle = %.1f\n", area);
}
