/*

Problem 2:
Write a program to prints the first n terms of Fibonacci
sequence where n is positive integer entered by user.

Sample Run:
Number of terms : 5
First 5 terms of Fibonacci Sequence : 0 1 1 2 3

*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter Number of terms: ");
    scanf("%d", &n);

    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    printf("First %d terms of fibonacci sequence: %d %d ", n, fib[0], fib[1]);

    for (int i = 2; i < n; i++)
    {

        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
    return 0;
}