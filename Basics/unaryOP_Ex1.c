//Purpose : To test your understanding of unary increment op.
/*
Lesson: 

There are 4 Unary Operators, these include:
1. Position '+' example => a=+1;
2. Negative '-' example => a=-1;
3. Increment (post or pre) '++' example => a++ same as  a+=1;
4. Decrement (post or pre) '--' example => a-- same as a-=1; 


 */

#include<stdio.h>

int main()
{

    int a=1;
    
    // Post-incrementing the value of a, and displaying it to the console.
    printf("The value of a is: %d\n",a++);
    printf("The value of a, after post incrment is now: %d\n",a);
    
    // Pre-incrementing the value of a, and displaying it to the console.
    printf("The value of a, after pre-increment is now: %d\n",++a);






    return 0;
}