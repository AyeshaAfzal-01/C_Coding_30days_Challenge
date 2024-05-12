/*

Problem 1:
Write a program to sort the elements entered by user in 
ascending order.
Sample Run:
Enter the number of values : 7
Enter 7 Numbers : 10 2 3 4 5 0 -19 
Sorted numbers in ascending order: -19 0 2 3 4 5 10

*/

// sorting an array in ascending order by insertion sort method:

#include <stdio.h>
#include <stdlib.h>
void insertionSort(int *, int); // function prototype

int main()
{

    int *num, n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int)); // dynamic memory allocation for the array of size 'n'

    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++) // taking elements of array as input
    {

        scanf("%d", &num[i]);
    }

    printf("Sorted array in ascending order: "); // printing output
    insertionSort(num, n);

     for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    free(num); // the num array is deallocated using the free function after it is no longer needed
    return 0;
}

void insertionSort(int *arr, int size) // function defination
{
    int temp, j; // a temporary variable 'temp' is created
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}