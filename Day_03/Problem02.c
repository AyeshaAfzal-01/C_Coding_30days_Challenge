/*
Problem 2:
Write a program that takes three angles(positive numbers) of a
triangle from user and prints “Yes, such triangle is possible” if
sum of all angles is 180 degrees, otherwise prints “Sorry, Such
triangle can’t exist”.
Sample Run:
Enter three angles of a triangle: 90 45 45
Yes, such triangle is possible.
*/

#include <stdio.h>

int main()
{
    /*Checking whether a triangle possibe or not based on user's entered three angles
    ---> if sum is equal to 180 then such triangle exist otherwise not*/

    int angle1, angle2, angle3, sum;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    (sum == 180) ? printf("Yes, such triangle is possible.") : printf("Sorry, such triangle can't exist.");

    return 0;
}