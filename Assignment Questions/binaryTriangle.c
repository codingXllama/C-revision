#include <stdio.h>

int main()
{

    int row;
    int col;
    int lineAmount;

    printf("Enter line amount: ");
    scanf("%d", &lineAmount);

    for (row = 1; row <= lineAmount; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%2d ", (row + col) % 2);
        }
        printf("\n");
    }

    return 0;
}