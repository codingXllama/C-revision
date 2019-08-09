//In this program we will use ternaryOP concept to test if a user inputted age is a teen or not.

#include <stdio.h>

int main()
{
    int userAge;
    printf("Enter your age: ");
    scanf("%d", &userAge);

    // Using ternayOP to determine if the user is a teen or not, we will then display the result to the user
    userAge >= 13 && userAge < 19 ? printf("You are a Teen, welcome to the crew!\n"): printf("You cannot join us, bye!\n");

    return 0;
}
