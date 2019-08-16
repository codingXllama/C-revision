#include <stdio.h>

int main()
{

    int userVal;
    printf("Enter a number: ");
    scanf("%d", &userVal);

    int divAmount = 0;

    for (int i = 0; i <= userVal; i++)
    {
        divAmount += 1;
    }
    if (divAmount >= 3)
    {
        printf("Not  a prime number\n");
    }
    else
    {
        printf("Prime Number!\n");
    }

    return 0;
}