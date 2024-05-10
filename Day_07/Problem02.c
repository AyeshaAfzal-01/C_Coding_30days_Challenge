/*

Problem 2:
Write a program that stores the value entered by user in
integer variable, address of that variable in pointer and
prints out the pointer address in hexadecimal format,
octal format and decimal format.
Sample Run:
Number : 3
3 is stored in memory location C3BD1098(16)
,30357210230(8) and 3283947672(10) of my system.
( Addresses might be different on your devices).


*/

// printing adress of a variable hexadecimal, octal and decimal formats

#include <stdio.h>

int main()
{
    int var;
    printf("Enter Number: ");
    scanf("%d", &var);

    int *ptr = &var;

    printf("%d is stored in memory location %X(16), %o(8) and %lu(10) of my system.\n", *ptr, ptr, ptr, ptr);

    return 0;
}