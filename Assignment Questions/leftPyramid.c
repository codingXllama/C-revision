#include <stdio.h>

int main()
{

    int row;
    int col;
    int lineAmount;
    int starPrintAmount;

    printf("Enter the number of lines: ");
    scanf("%d", &lineAmount);

    starPrintAmount = lineAmount;

    // Displaying the first part of the left triangle. We will display the stars from descending to ascending order
    for (row = 1; row <= lineAmount; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Displaying the second part/half of the left triangle. We will display the stars from ascending to descending order
    for (row = 1; row <= lineAmount; row++)
    {
        for (col = 1; col <= starPrintAmount; col++)
        {
            printf("*");
        }
        printf("\n");
        starPrintAmount -= 1;
    }

    return 0;
}