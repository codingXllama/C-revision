// Iterative approach for finding the factorial of a given number

#include <stdio.h>

int main()
{

    int userVal;
    int counter = 1;
    int fact = 1;

    printf("Enter a number to computer factorial: ");
    scanf("%d", &userVal);

    while (counter <= userVal)
    {
        fact *= counter;
        counter += 1;
    }
    printf("The factorial of %d is %d\n", userVal, fact);

    return 0;
}