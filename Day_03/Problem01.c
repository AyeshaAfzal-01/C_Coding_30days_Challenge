/*
Problem 1:
Write a program that takes three numbers from user and prints all
numbers are same if they are equal ,otherwise prints the largest
and smallest number among them.
Sample Run:
Enter three numbers: 19 0 -19
Smallest Number : -19
Greatest Number : 19
*/

#include <stdio.h>
/*checking if three numbers are equal or not--->
if not then printing the smallest and largest number*/
int main()
{

    int num[3]; // an array of three numbers

    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]); // getting numbers as input
    }

    int min = num[0];
    int max = num[0];

    if (num[0] == num[1] && num[1] == num[2])
    {
        printf("All numbers are same.");
    }

    else
    {

        for (int i = 1; i < 3; i++)
        {

            if (num[i] < min)
            {
                min = num[i];
            }
            if (num[i] > max)
            {
                max = num[i];
            }
        }

        printf("Smallest number: %d\nGreatest number: %d\n", min, max);
    }

    return 0;
}