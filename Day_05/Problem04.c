/*

Problem 4: 
Write a program that prints the following pattern. 
(a)                              (b)
                                     * * * * * 
*                                    * * * *
* *                                  * * *
* * *                                * *
* * * *                              *
* * * * *                    
*/

#include <stdio.h>
int main()
{

    // Part ( a ):
    printf("(a)\n\n");

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }

        printf("\n");
    }

    // Part ( b ):
    printf("\n(b)\n\n");

    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }

        printf("\n");
    }

    return 0;
}