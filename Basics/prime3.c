// 3rd method of finding if a number is prime

#include <stdio.h>

int main()
{

    int primeStart = 2;
    int primeAmount = 0;
    int userIn;
    printf("Enter a number: ");
    scanf("%d", &userIn);

    // The logic to check if a number is prime or not

    for (primeStart; primeStart < userIn; primeStart++)
    {
        int primeNumber[primeAmount];
        // Checking if the number is divisible by another number other than 1 and it's self
        if (userIn % primeStart == 0)
        {
            
            break;
        }
        else
        {
            primeNumber[primeAmount] = primeStart;
            primeAmount += 1;
        }
    }

    // Check if the primeStartCounter ==  userInputValue
    primeStart == userIn ? printf("Prime!\n") : printf("Not prime\n");

    return 0;
}