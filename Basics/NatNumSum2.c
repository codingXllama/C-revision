/*
    Write a program to print the sum of numbers given from keyboard
    by the user using while loop, you should terminate when 
    user inputs a negative number

 */

#include <stdio.h>

int main()
{

    int userValue;
    int totalSum = 0;

    //User prompt
    printf("Enter negative # to exit program else Enter a number up to sum to: ");
    scanf("%d", &userValue);

    while (userValue >= 0)
    {
        totalSum += userValue;
        printf("Enter a positive number, or negative number to terminate: ");
        scanf("%d", &userValue);
    }

    printf("The sum of the numbers: %d\n", totalSum);

    // int initialUserValue = userValue;

    // while (userValue >= 0)
    // {
    //     totalSum += userValue;
    //     userValue--;
    // }

    // printf("userValue is %d", userValue);
    // if (initialUserValue == 0)
    // {
    //     printf("The total sum from 1 to %d is: %d\n", initialUserValue, totalSum);
    // }

    // else
    //     printf("The Loop has been terminated\n");

    return 0;
}