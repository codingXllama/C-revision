#include <stdio.h>
#include <math.h>
/**

When the program executes it will work in the following way:
You must accomplish all the menu options and validation checkings exactly as asked.

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 1
Enter number: -1
Invalid number for factorial

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 1
Enter number: 5
Factorial of 5 is 120

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 20
This program can find factorials only in the range 0 - 10

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 2
Enter a: 2
Enter b: 5
2^5 = 32.0

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 5
Invalid menu option

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 3

*** Thank you ***

NOTE: You should use library function pow to find a^b, no need to write code
for finding a^b.

*/

int main()
{
    int quit = 0;
    int n;            // n is the number for which you will find factorial
    int p = 1;        // you are going to keep the factorial of n in p
    double base, exp; // for a^b
    int counter = 1;

    int option; // for keeping the menu option
    while (!quit)
    {
        // print the menu here
        printf("1.Find factorial\n");
        printf("2. Find a^b\n");
        printf("3. Quit");

        // get the response into option variable.
        printf("What you want to do: \n");
        scanf("%d", &option);
        // Now. you can use if-else to check the option and do needful

        // When option == 3, you need to do something with the variable quit, think
        // about that.

        if (option == 3)
        {
            quit = 1;
        }
        else if (option == 1)
        {
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n < 0)
            {
                printf("No negative numbers\n");
            }
            else if (n > 10)
            {
                printf("Can only compute factorial of numbers from 1 to 10\n");
            }
            else if (n >= 0 && n <= 10)
            {
                while (counter <= n)
                {
                    p *= counter;
                    counter++;
                }
            }
            printf("The Factorial of %d is %d\n", n, p);
        }
        else if (option == 2)
        {
            printf("Enter a base number: ");
            scanf("%lf", &base);

            printf("Enter a exponent number: ");
            scanf("%lf", &exp);

            double expSoln = pow(base, exp);

            printf("The %lf\n", expSoln);
        }

        // When option == 1, you should read n and first check the validity,
        // if n < 0, a particular message has to be printed, when n > 10, another
        // message has to be printed (see the expected output above), if n is valid
        // write a while loop to calculate the factorial and print it, becareful about
        // the initial value of p.
        // for option == 2, read base and exponant then make a call to the pow function
        // print the return value using printf. You may declare a variable to hold the
        // result.
    }
}
