/*

Problem 3:
Write a program to search for a particular element(N) in 
the list of numbers entered by user and displays the
location of first element(N) in the list of numbers, 
otherwise it displays -1 and number of times that 
element(N) occurs in the list of numbers(if any),otherwise 
it displays 0.
Sample Run 0:
Enter the element you want to search in the list: 4
Enter the list length: 10
Enter 10 Numbers : 1 2 3 3 5 6 9 4 4 4
Location of first 4 in list: 8
Number of 4 in the list: 3

*/

//program that return sthe first the first location of a number 'X' in array and also counts it's number of appearances

#include <stdio.h>
#include <stdlib.h>

int searchNumber(int *, int, int); 
int countAppearnces(int *, int, int);

int main()
{

    int x, length;
    int *num;

    printf("Enter the element you want to search in the list: ");
    scanf("%d", &x);

    printf("Enter the length of list: ");
    scanf("%d", &length);

    num = (int *)malloc(length * sizeof(int));

    printf("Enter %d numbers: ", length);

    for (int i = 0; i < length; i++)
    {

        scanf("%d", &num[i]);
    }

    printf("Location of first %d in list: %d\n", x, searchNumber(num, length, x));
    printf("Number of %d in the list: %d\n", x, countAppearnces(num, length, x));

    free(num);

    return 0;
}

int searchNumber(int *arr, int size, int n)
{

    int location = -1;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == n)
        {
            location = i + 1;
            break;
        }
    }

    return location;
}

int countAppearnces(int *arr, int size, int n)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == n)
        {
            count++;
        }
    }

    return count;
}