/*

Problem 2:
Write a program in c to print all factors of the number
entered by user by creating functions.
Sample Run:
Number: 26
Factors of 26 : 1 2 13 26

*/

// program that dispalys all factors of a number entered by the user

#include <stdio.h>
void Num_Factors(int n);

int main()
{

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    Num_Factors(num);

    return 0;
}

void Num_Factors(int n)
{

    printf("Factors of 26: ");

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {

            printf("%d ", i);
        }
    }
}
