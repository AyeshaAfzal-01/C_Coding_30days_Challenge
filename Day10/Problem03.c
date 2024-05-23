/*

Problem 3:
Write a program to make a simple arithmetic calculator.
You can configure it according to your own choice.

*/

// Program to make a simple arithematic calculator
#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{

    int num1, num2, ans;
    char operator;

    printf("Enter Number1 = ");
    scanf("%d", &num1);

    printf("Enter Number2 = ");
    scanf("%d", &num2);

    printf("Enter Operator = ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        ans = add(num1, num2);

        break;
    case '-':
        ans = sub(num1, num2);

        break;
    case '*':
        ans = mul(num1, num2);

        break;
    case '/':
        if (num2 != 0)
        {
            ans = div(num1, num2);
        }
        else
        {
            printf("Error!Division by Zero not possible.\n");
        }

        break;

    default:
        printf("Invalid Operator.\n");
    }

    printf("Answer = %d\n", ans);
    return 0;
}

int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{

    return (a - b);
}
int mul(int a, int b)
{

    return (a * b);
}
int div(int a, int b)
{

    return (a / b);
}