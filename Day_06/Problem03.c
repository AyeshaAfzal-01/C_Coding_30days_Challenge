/*

Problem 3:
Write a program that reads number of test cases(T) on first line
and for each T , it scans the integer value(N) from user on new line
and displays the sum of all prime numbers less than the integer
value for each N.

*/

// enter test case from user, then take numbers input from user equal to test cases, then display the sum
// of prime numbers that are less than number

#include <stdio.h>
int primeSum(int n);

int main()
{

    int test;
    int num[test]; // taking an array of size test cases

    printf("Enter test cases: ");
    scanf("%d", &test);

    printf("Enter %d numbers:\n", test);
    for (int i = 1; i <= test; i++) // taking the nubers input equal to test cases
    {

        scanf("%d", &num[i]);
    }

    printf("Sum of Prime numbers:\n");

    for (int i = 1; i <= test; i++) // displaying sum of prime numbers less than number
    {

        printf("%d\n", primeSum(num[i]));
    }

    return 0;
}

int primeSum(int n) // function defination
{

    int prime_sum1 = 0;

    for (int i = 2; i <= n; i++)
    {
        int isprime = 1; // suppose a variable and store 1 in it

        for (int j = 2; j <= i / 2; j++)
        {

            if (i % j == 0)
            {

                isprime = 0; // if the variable vlaue changes to zero then number is not prime
                break;
            }
        }
        if (isprime == 1 && i < n)
        {

            prime_sum1 += i;
        }
    }
    return prime_sum1;
}
