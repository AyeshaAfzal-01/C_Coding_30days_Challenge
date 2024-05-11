/*

Problem 1:
Write a program that calculates the sum and average of all 
numbers entered by user(Using arrays).
Sample Run:
Enter the number of values : 5
Enter 5 Numbers : 1 2 3 4 5
Sum : 15
Average : 3

*/

// A program that calculates the sum and average of the numbers entered by the user 

#include <stdio.h>

int main()
{
    int values, sum = 0;
    float average = 0;

    printf("Enter the number of values: ");
    scanf("%d", &values);

     int arr[values];

    printf("Enter %d numbers: ", values);

    for (int i = 0; i < values; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / values;

    printf("Sum = %d\nAverage = %.2f\n", sum, average);

    return 0;
}