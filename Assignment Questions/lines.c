// Printing a line pattern in c

#include <stdio.h>

int main()
{

    int col;
    int row; 
    int lineAmount;
    printf("Enter number of lines: ");
    scanf("%d", &lineAmount);

    for (row = 0; row < lineAmount; row++)
    {
        for (col = 0; col <= row; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}