/*

Problem 2: 
Write a program that get an input from the user and check whether number is 
palindrome or not. 
Sample Run: 
Number: 151 
Palindrome number 
Number: 155 
 Not Palindrome number. 
 
 */

// Program to check a number is Palindrome or not
// Palindromic number is the number that remains the same when its digits are reversed ---> 121, 16461, 5478745, 4, 5 etc

#include <stdio.h>

int main()
{

    int num, originalNum, reverse = 0; // reverse of number is stored in reverse var

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;                 // storing the original Number entered by the user in originalNum var

    while (num != 0)
    {                                          // main logic
                                               // e.g user enter number 121
        reverse = (reverse * 10) + (num % 10); // 0 + 1---> reverse=1   ;  1*10 + 12%10= 10 + 2---> reverse=12  ; 120 + 1 ---> reverse=121
        num = num / 10;
                                               // num=12               ;12 /10---> num=1               ;1/10 = 0  --> num=0 ---> terminate from loop
    }

    if (reverse == originalNum)
    {
        printf("%d is a Palindrome Number.\n", originalNum);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n", originalNum);
    }

    return 0;
}