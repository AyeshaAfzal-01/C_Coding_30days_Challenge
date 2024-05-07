/*

Problem 4:
Write a program in C that generates a number between 10 and 20
and asks the user to guess it. Provide some hint whether guess is
too low or too high until user entered the correct guess.
Sample Run:
Guess the number(10-20) : 2
Too low! Try Again.
Guess the number(10-20) : 10
Bravo! You guessed the number in 2 tries.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// guessing the correct number in the range of 10 to 20, also giving hints
int main()
{

    srand(time(NULL));

    int num, user_num, count = 0;

    num = rand() % 11 + 10; // random no. in the range of 10 to 20

    printf("Guess the number(10-20) and enter: ");

    while (1)
    {

        scanf("%d", &user_num);
        count++;

        if (user_num < num)
        {
            printf("Too low! Try again.\n");
            printf("Guess the number(10-20) and enter: ");
        }
        else if (user_num > num)
        {
            printf("Too high! Try again.\n");
            printf("Guess the number(10-20) and enter: ");
        }
        else
        {
            printf("Bravo! you guessed the number in %d tries.\n", count); // printing output
            break;
        }
    }

    return 0;
}