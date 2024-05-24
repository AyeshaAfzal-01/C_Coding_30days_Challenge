/*

Problem 3:
Write a program to print the second maximum element in 
an array entered by user.
Sample Run:
Enter array size: 5
Enter 5 elements: 1 2 3 9 2
Second maximum element: 3

*/

//  finding the second maximum element in the array
// first sorting the array by insertion sort and then finding the second largest element

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, *arr, max = 0, sec = 0;

    printf("Enter list size = ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements = ", size);

    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    max = arr[size - 1];

    for (int i = size - 2; i >= 0; i--)
    {
        sec = arr[i];
        if (sec < max)
        {
            sec = arr[i];
            break;
        }
    }
    printf("Second maximum element: %d", sec);

    free(arr);

    return 0;
}