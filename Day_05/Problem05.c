/* 

Problem 5: 
Write a C program to print Alphabet Triangle 
Enter range=4 
   A 
  ABA 
 ABCBA 
ABCDCBA

*/

#include <stdio.h>
int main()
{

    int range;
    char ch;

    printf("Enter Range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {

        for (int space = 1; space <= (range - i); space++)
        {

            printf(" ");
        }
        ch = 'A';                    // initialize character with A
        for (int j = 1; j <= i; j++) // This loop will print characters in increasing order
        {

            printf("%c", ch++);
        }
        ch -= 2;                    // Adjusting characters for next loop
        for (int j = 1; j < i; j++) // This loop will print characters in dicreasing order
        {

            printf("%c", ch--);
        }
        printf("\n");
    }
    return 0;
}
