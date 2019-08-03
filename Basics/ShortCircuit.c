/*
    Purpose: to use && and || operators with post and pre-increment

    Note: 

    When evaluating the value of && operator which has left-right associativity
    as soon as the left-value is  false (0) then the && operator will NOT go and check the value of other operator.
    It will just RETURN 0 (false).
    
    Example #1:
     
    int a = -1 , b=2;
    printf("%d\n",++a && b++);

    Output : 0, since 0 is false and false will always return 0 under the AND- truth table
    
    ***IMPORTANT  NOTICE *** Since the first value (left value ) for computing the && operator is 0, which is false, then the next variable b++ will never be reached thus it will never be computed.


    
    Example #2 
    int a = 0 , b=-2;
    printf("computed value: %d\na= %d\nb= %d",++a || b++,a,b);

    Output: 
    
    Computed value: 1
    a=1
    b=-2

    REASON for output:
    
    Since we're working with a logical operator in this case '||' or operator we must keep note for the following: 
    Step 1: Increment the most left-hand side variable, since logical operators are left to right associative. 
            SO increment ++a to be 1.
    Step 2: Since we're dealinig with OR operator, as long as 1 value is True then we will return true (1).
    
    Note * Since the far most value is computed to be true (1), then the next variable b++, will never be reached and WILL never be changed.


 */

#include<stdio.h>


int main()
{

    int a=0,b=2;
    printf("Original Values include:\na: %d\nb: %d\n",a,b);
    // Example #1: Computing the unary operator and logical Operator
    // printf("Computed result is: %d\nValue of a= %d\nValue of b= %d\n",++a && ++b,a,b);

    //Example #2: Compuitng the unary operator and logical OR operator
    printf("computed value: %d\na= %d\nb= %d\n",++a || b++,a,b);


    return 0;
}