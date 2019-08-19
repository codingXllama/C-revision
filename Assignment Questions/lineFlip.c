#include <stdio.h>

int main()
{
    int lineAmount;
    int row;
    int col;

    printf("Enter line amount: ");
    scanf("%d", &lineAmount);

    int numOfStarPrints = lineAmount;
    for (row = 1; row <= lineAmount; row++)
    {
        for (col = 1; col <= numOfStarPrints; col++)
        {
            printf(" * ");
        }
        printf("\n");
        numOfStarPrints -= 1;
    }
    return 0;
}