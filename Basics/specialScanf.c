/*
    The purpose of this file is to understand the special scanf.
    Points to obtain:
    1. The scanf reads input from the keyboard according to how the scanf is setup
    Example, scanf("%d %d",&x,&y);
    Notice how the format specifier %d includes spaces so we have %d space %d
    This tells us that the user is allows to put a space inorder to input the next number.

    2.When we assign the scanf into a variable suppose int myVar=scanf("%d %d",&x,&y);
    Then myVar will contain the NUMBER of successful input(s) made by user from the keyboard via scanf.
    Therefore, the value of myVar will be 2. Since we have at most 2 foramat specifiers that each is reference to a variable

    

 */


#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter 2 numbers: ");
    int myVar=scanf("%d %d",&x, &y);

    printf("The 2 numbers entered are: %d %d %d\n",x,y,myVar);

    return 0;
}