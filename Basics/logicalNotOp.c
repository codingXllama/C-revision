// Logical Not Operator in c
//Note ! is the unary operator and it has HIGHER precedence than any BINARY operator example  >,<.>=,<=,==,!=,&&,||,!,&,
//check https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/ for more info on the list of Operators and their type in C 

#include<stdio.h>

int main()
{

    int a=10,b=4,x; 
    /*
     x will be set to 0
     Reason: Since '!' is a Unary Op, and it contains higher precedence than Binary Op, then we will first evaluate what ever is near the ! op.

     Step 1: In this case we have to first evaluate !a
     varaible 'a' by default has the value of 100, which means that variable 'a' contains a value, so the boolean value for 'a' is true, and that translates to a '1' in binary
     !a is the opposite of true (1) which is false(0)

     Step 2: is to check if 0>b, and in this case b contains the value of 4.
     solving this Binary Operator 0>4 is false in other words it's 0 in binary

     Therefore, the value of x will be 0. 
     */
    x=!a>b;

    printf("%d\n",x);


    return 0;
}