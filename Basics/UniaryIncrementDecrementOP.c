
//Purpose : To learn how Unary Incrment and Decrement work with different operators example '*' multiplication.

#include<stdio.h>

int main()
{
    int a=5, i;
    int b=5;
    
    
    /*
        1.Example of post-increment           ++> example: a++ is the same as a=a+1 

        i=a++; 

        Steps taken to get to the result include:
        1: variable 'a' will be assigned to i first.                    So i = 5
        2: variable 'a' will then be incremented from 5 to 6.           so a = 6 
        
        Output: a=6 , i=5
        
    */

   
   /*
    2.Example of pre-increment               ++> example: ++a

    i=++a;

    Steps taken to get to the result, includes:
    1. First increment the value of 'a' from 5 to 6
    2. Then ASSIGN the incremented value of 'a' which is now 6 into i.So i now equals 6.  

    Output: 
    a=6
    i=6


    */


   /*
   3. Example of post increment with Operator precedence  
   Given Ex:  i = a++ * b++;

   Note: * has higher precedence than assignemnt operator, so we must
   FIRST:  compute a * b, which is 5*5=25.
   SECOND: Assign the value '25' into the variable i. So i=25
   THIRD:  we will post increment the value of a and b to a= 6, b=6
   
   Expected Output:
   i= 25
   a=6
   b=6
   

    More on Operator precedence and associativity:   https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/
    */


   /*
   
   4. Example of pre increment with Operator precedence  
   Given Ex:  i = ++a * b++;

   FIRST:  pre-increment a. So ++a will have the value of 5+1, a=6.
   SECOND: * has higher precedence than assignemnt operator, so we must multiply a * b, to get 6*5 =30.
   THIRD:  Assign the value of '30' to i.
   
   Expected Output:
   i= 30
   a=6
   b=5
   

    More on Operator precedence and associativity:   https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/
    */
   
   
    
   i= ++a * b++;

    printf("a = %d i= %d\n",a,i);

    return 0;
}