/*
Problem 1:
Write a program that reads the length and width of a rectangle
from user and displays its area.
Sample Run:
Enter length of rectangle = 7
Enter width of rectangle = 9
Area of the rectangle = 63
*/

#include <stdio.h>
int main()
{

    int length;
    int width;

    printf("Enter lenght of rectangle= ");
    scanf("%d", &length);

    printf("Enter width of rectangle= ");
    scanf("%d", &width);

    printf("Area of the rectangle= %d", length * width); // area of rectangle

    return 0;
}