//TO find the sum to of n. natural numbers from the user number. Starting from 1 to n,where n is the user upper bound number

#include <stdio.h>

int main()
{
    int userNum;
    int counter = 1;
    int totalSum = 0;
    printf("Enter number to count up to: ");
    scanf("%d", &userNum);

    while (counter <= userNum)
    {
        totalSum += counter;
        counter++;
    }
    printf("The total sum from 1 to %d is: %d \n", userNum, totalSum);
    return 0;
}