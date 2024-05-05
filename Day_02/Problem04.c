/*
Problem 4:
Write a program that takes two number(positive integers) from
user and displays their Bitwise AND, Bitwise OR, Bitwise XOR,
Right shift of first number with 2 and left shift of second number
with 2.
Sample Run:
Enter two numbers: 3 5
3&5=1
3|5=7
3^5=6
3>>2=0
5<<2=20
*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    //    bitwise AND
    printf("%d&%d= %d\n", num1, num2, num1 & num2);
    // bitwise OR
    printf("%d|%d= %d\n", num1, num2, num1 | num2);
    // bitwise XOR
    printf("%d^%d= %d\n", num1, num2, num1 ^ num2);
    // Right shift
    printf("%d>>2= %d\n", num1, num1 >> 2);
    // left shift
    printf("%d<<2= %d\n", num2, num2 << 2);

    return 0;
}
