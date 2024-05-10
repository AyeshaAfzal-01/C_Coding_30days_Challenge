/*

Problem 3:
Write a program in c to swap two integers entered by user
without using third variable( By User defined function).
Sample Run:
Number 1: 5
Number 2: 9
After swapping,
Number 1: 9
Number 2: 5

*/

// swapping two numbers without using a third variable

#include <stdio.h>

void swaping(int *, int *);

int main()
{

    int n1, n2;

    printf("Enter Number1: ");
    scanf("%d", &n1);

    printf("Enter Number2: ");
    scanf("%d", &n2);
    swaping(&n1, &n2);

    printf("After Swaping:\nNumber1: %d\nNumber2: %d\n", n1, n2);
    return 0;
}

void swaping(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}