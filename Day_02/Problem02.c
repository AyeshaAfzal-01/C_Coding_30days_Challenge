/*
Problem 2:
Write a program that takes five integers from the user in a single
line and displays its sum and average (Up to two decimal places).
Sample Run:
Enter five numbers: 1 2 3 4 5
Sum: 15
Average: 3.00
*/

#include <stdio.h>

int main()
{
    // sum and average of 5 numbers
    int num[5];
    int sum = 0;
    float average;

    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    average = (float)sum / 5;

    printf("Sum: %d\nAverage: %.2f", sum, average);

    return 0;
}
