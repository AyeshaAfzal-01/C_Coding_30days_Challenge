/*

Problem 2:
Write a program to takes input 2x2 matrix from user and 
displays its determinants.
Sample Run:
Enter 2x2 matrix elements: 
2 4
1 3
Determinant: 2

*/

#include <stdio.h>

int main()
{

    int det, matrix[2][2];
    printf("Enter 2x2 matrix elements = ");
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    printf("Determinant: %d", det);
    return 0;
}