/*
    Purpose: to use && and || operators with post and pre-increment

    Note: 

    When evaluating the value of && operator which has left-right associativity
    as soon as the left-value is a false (0) then the && operator will NOT go and check the value of other operator
    
    Example:
     
    int a = -1 , b=2;
    printf("%d\n",++a && b++);

    Output : 0, since 0 is false and false will always return 0 under the AND- truth table
    
    ***IMPORTANT  NOTICE *** Since the first value (left value ) for computing the && operator is 0, which false, then the next variable b++ will never be reached thus it will never be computed
 */

#include<stdio.h>


int main()
{

    int a=-1,b=2;
    printf("Original Values include:\na: %d\nb: %d\n",a,b);
    printf("Computed result is: %d\nValue of a= %d\nValue of b= %d\n",++a && ++b,a,b);



    return 0;
}