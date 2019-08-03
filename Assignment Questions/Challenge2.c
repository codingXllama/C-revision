//Purpose: to test knowledge of if-statment, and the sceret of printf

#include<stdio.h>

int main()
{

    if(printf("Hi"))
        printf(" there\n");
    else{
        printf(" bye\n");
        printf("wait what?\n");
    }
    return 0;


// Output : Hi there
/*
    Reason: 
    Step1: Printf will print the inner part which is "Hi"
    Step2: Printf will return the count of character which is 2.
    Note: 2 is not 0, so 2 is true a.k.a 1.
    Step3: Since 2 is true, we will enter the if body and print 'there' with the already printed 'Hi' from the if condition in line 8.
 */

return 0;
}