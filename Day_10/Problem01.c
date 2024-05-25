/*

Problem 1:
Write a program that prints a table of binary, octal and
hexadecimal equivalent of decimal numbers in the
range(1-255).
Sample Run:
Decimal     Binary        Octal        Hexadecimal
 1          00000001        1              1
 2          00000010        2              2
....     .............    .....           ....
255        11111111        377             FF


*/

#include <stdio.h>

void Binary(int);

int main()
{
printf("Decimal\t\tBinary\t\tOctal\tHexadecimal\n");
    for (int i = 1; i <= 255; i++)
    {

        printf("%d\t", i);
        Binary(i);
        printf("\t%o\t%X\n", i, i);
    }
    return 0;
}
void Binary(int n)
{
    int rem, i, a[8];
    for (i = 0; i < 8; i++)
    {
        rem = n % 2;
        n /= 2;
        a[i] = rem;
    }

    for (int j = i - 1; j >= 0; j--)
    {

        printf("%d ", a[j]);
    }
}