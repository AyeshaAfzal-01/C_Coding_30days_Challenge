/*
Problem 3:
Write a program that generates two random numbers. First
number should be in the range[10,99] and second number
should be less than first number. Then it, checks whether their
sum is even or odd and prints out the result.
Sample Run:
Two random numbers : 20 19
Their sum is odd.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generating two random numbers and finding out their sum is even or odd
    srand(time(NULL));
    int num1, num2, sum;

    num1 = rand() % 90 + 10; // first number in the range of 10 to 99 --> num = (rand() % (upper – lower + 1)) + lower
    num2 = rand() % num1;    // second nuber less than the first number

    sum = num1 + num2;

    printf("Two random numbers: %d %d\n", num1, num2);

    if (sum % 2 == 0)
    {
        printf("Their sum is even.");
    }
    else
    {
        printf("Their sum is odd.");
    }

    return 0;
}