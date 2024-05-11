/*

Problem 3:
Write a program that takes number of tries(T) user wants
in the first line and for each try, it displays the location of
first odd integer(if any) , otherwise displays 0 on new line
among the list of numbers entered by user.
Sample Run:
Enter the number of tries : 2
Enter the number of values : 7
Enter 7 Numbers : 10 2 3 4 5 0 -19
Location of First odd integer: 3
Enter the number of values : 5
Enter 5 Numbers : 2 4 6 8 10
Location of First odd integer: 0

*/

/*program that takes number of tries(T) user wants
in the first line and for each try, it displays the location of
first odd integer(if any) , otherwise displays 0 on new line
among the list of numbers entered by user*/

#include <stdio.h>
int main()
{
    int t, values, location_odd = 0;

    printf("Enter number of tries: ");
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {

        printf("Enter Number of values: ");
        scanf("%d", &values);

        printf("enter %d values: ", values);

        int arr[values];

        for (int j = 0; j < values; j++)
        {

            scanf("%d", &arr[j]);
        }

        for (int k = 0; k < values; k++)
        {

            if (arr[k] % 2 != 0)
            {

                location_odd = k + 1;
                break;
            }
        }

        printf("Location of first odd integer = %d\n", location_odd);
        location_odd = 0;
    }
    return 0;
}
