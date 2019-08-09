/*
Purpose: To understand how to use Ternary Operators, with an Example



Operators : '?' sams as 'then'
            ':' same as 'else'


Basic Syntax: condition ? TrueExpression/body goes here : FalseExpression Body goes here ;
Same as Saying: if the condition is true, then do this, else if condition is false then do that;

Converting basic if-statement format into ternary Operator

Example 0:


if (myAge>samsAge)
    maxAge=myAge;
else 
    maxAge=samsAge;


...in ternary op.. we get... 
maxAge= myAge>samsAge ? myAge : samsAge;
 */

#include <stdio.h>

int main()
{

    int maxAge;
    int samsAge = 1;
    int myAge = 2;
    int bobsAge = 3;

    // Example 0: terny op for an if statement with no nested if statements
    // maxAge = samsAge > myAge ? samsAge : myAge;

    // printf("The oldest age is: %d\n", maxAge);

    // Example 1: terny op for an if statement with  nested if statements
    // maxAge = (samsAge > myAge && samsAge>bobsAge) ? samsAge:(bobsAge>myAge && bobsAge>samsAge)?bobsAge:samsAge);

    // Below is an example for the nested if statement in the traditional if-statement layout
    // if (myAge > samsAge && myAge > bobsAge)
    // {
    //     maxAge = myAge;
    // }
    // else if (samsAge > bobsAge && samsAge > myAge)
    //     maxAge = samsAge;
    // else
    //     maxAge = bobsAge;

    // Below is an example for the nested if statement of the traditional if-statement layout converted using ternary Op.

    maxAge = myAge > samsAge && myAge > bobsAge ? myAge : (samsAge > myAge && samsAge > bobsAge ? samsAge : bobsAge);
    printf("The max age is: %d\n", maxAge);
    return 0;
}