/*

Problem 1:
Write a program that checks whether the given number is a prime number or not.
Sample Run:
Enter number: 3
3 is a prime number.
Enter a number:4
4 is not a prime number

*/

// Program to check if a number is prime or not

#include <stdio.h>

int main()
{

    int num;
    int isPrime = 1; // suppose an isprime variable and storing 1 in it

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            isPrime = 0; // if isPrime var value changes to zero that means not prime
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a Prime Number.\n", num);
    }
    else
    {
        printf("%d is not a Prime Number.\n", num);
    }

    return 0;
}