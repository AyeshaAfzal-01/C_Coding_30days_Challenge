/*

Problem 1:
Write a program that scans for array from user and returns 
the reverse array in place.(User defined function)
Sample Run:
Enter list size: 5
Enter 5 elements: 1 9 0 7 19
Reverse array: 19 7 0 9 7

*/

//  program that scans for array from user and returns
// the reverse array in place.

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *, int);

int main()
{
    int size, *arr;

    printf("Enter list size = ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int)); // dynamic memory allocation
    printf("Enter %d elements = ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);
    free(arr);

    return 0;
}

void reverseArray(int *n, int s)
{
    printf("Reverse Array = ");
    for (int i = s - 1; i >= 0; i--)
    {
        printf("%d ", n[i]);
    }
}