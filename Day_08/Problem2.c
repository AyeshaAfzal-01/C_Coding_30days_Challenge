/*

Problem 2:
Write a program that calculates the maximum and
minimum number among the values entered by user.
Sample Run:
Enter the number of values : 7
Enter 7 Numbers : 10 2 3 4 5 0 -19
Maximum Number: 10
Minimum Number: -19


*/

// A program that calculates the maximum and minimum number among the numbers entered by the user

#include <stdio.h>

int max(int *, int); // function prototype
int min(int *, int);

int main()
{
    int values;

    printf("Enter number of values: ");
    scanf("%d", &values);

    printf("Enter %d numbers: ", values);

    int arr[values];
    // taking inputs from user
    for (int i = 0; i < values; i++)
    {
        scanf("%d", &arr[i]);
    }
    // function call
    printf("Maximum Number = %d\n", max(arr, values));
    printf("Minimum Number = %d\n", min(arr, values));

    return 0;
}

int max(int *a, int size) // function defination
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int min(int *a, int size)
{
    int min = a[0];
    for (int i = 0; i < size; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}