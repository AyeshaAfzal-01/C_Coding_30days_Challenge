/*


Problem 4:
Write a program that scans two integers from user and
displays their HCF and LCM.
Sample Run:
Enter Number 1: 6
Enter Number 2: 12
HCF of 6 and 12: 6
LCM of 6 and 12: 12

*/

// program to calculate the lcm and hcf

#include <stdio.h>
#include <stdlib.h>

void hcf_lcm(int, int); // function prototype

int main()
{

    int n1, n2;

    printf("Enter number1: ");
    if (scanf("%d", &n1) != 1)
    {
        printf("Invalid input! please enter an integer.\n"); // ensuring that the user should enter the correct input that is integer
        return 1;
    }

    printf("Enter number2: ");
    if (scanf("%d", &n2) != 1)
    {
        printf("Invalid input! please enter an integer.\n");
        return 1;
    }

    if (n1 == 0 || n2 == 0) // error handling in case of 0
    {
        printf("HCM and LCM of 0 is 0\n");
        return 0;
    }

    hcf_lcm(n1, n2); // function call

    return 0;
}

void hcf_lcm(int a, int b) // function defination
{
    int hcf, lcm;

    if (a < 0 || b < 0) // case handling for negative inputs
    {
        a = abs(a);
        b = abs(b);
    }

    for (int i = a; i >= 1; i--) // for finding HCF, the highest number at which both numbers are divisible
    {
        if ((a % i == 0) && (b % i == 0))
        {
            hcf = i;
            break;
        }
    }

    lcm = (a * b) / hcf; // formula: LCM(a, b) = a.b / HCF(a, b)

    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
}
