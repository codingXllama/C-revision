//Leap Year Example to test if-else concept understanding
/*
    To determine if the given year is Leap Year, one must confirm the following:
    1. If givenYear % 4 then yes. Else No.
    2. If 1 is Yes then if givenYear % 100 is True, then go to 3.Else Yes it's LeapYear
    3. If 1 and 2 is True,then check if given Year % 400 is true. If true then yes it's Leap Year, else it's not leapYear.

 */

#include <stdio.h>

int main()
{

    int userYear;

    printf("Enter a Year Number: ");
    scanf("%d", &userYear);

    // userYear % 4 == 0 ? userYear % 100 ? userYear % 400 == 0 ? printf("leap year") : printf("not leap year") : printf("leap year") : printf('no');

    // userYear % 4 == 0 ? (userYear % 100 ? (userYear % 400 ? printf("%d is NOT Leap Year!\n", userYear) : printf("%d is NOT Leap Year!\n", userYear)) : printf("%d is Leap Year\n", userYear)) : printf("%d is Not Leap Year\n", userYear);

    if (userYear % 4 == 0)
    {
        if (userYear % 100 == 0)
        {
            if (userYear % 400 == 0)
            {
                printf("Yes, the year is leap year\n");
            }
            else
            {
                printf("NO the year is NOT leap year\n");
            }
        }
        else
        {
            printf("Yes the year is not leap year\n");
        }
    }
    else
    {
        printf("No the year is NOT leap year\n ");
    }
}