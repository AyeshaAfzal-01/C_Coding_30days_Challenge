/*

Problem 2:
Write a program to sort the elements entered by user in 
descending order.
Sample Run:
Master “C Language” in 30 Days Challenge
Day 9 By TECH INVOLVERS
 
Enter the number of values : 7
Enter 7 Numbers : 10 2 3 4 5 0 -19 
Sorted numbers in descending order: 10 5 4 3 2 0 -19

*/

// sorting an array in descending order by insertion sort:

#include <stdio.h>
#include <stdlib.h>

void descending_Insertion_Sort(int *, int); // function prototype

int main()
{

    int *num, n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int)); // dynamically allocated the memory

    printf("Enter %d numbers: ", n); // taking inputs

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &num[i]);
    }

    printf("Sorted array in descending order: "); // printing array in descending order

    descending_Insertion_Sort(num, n); // function call

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    free(num); // the num array is deallocated using the free function after it is no longer needed
    return 0;
}

void descending_Insertion_Sort(int *arr, int size) // function defination
{

    int temp, j; // a temporary variable 'temp' is created
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < temp) // changing this codition for descending order ' arr[j] < temp'
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}
