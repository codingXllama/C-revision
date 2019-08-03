// Purpose: to display what happens when if-statements contain a ';' semi-colon. A.k.a 'terminating' if-conditions.


#include<stdio.h>

int main()
{
    if(printf("hi"));  
    {
        printf("a\n");
    }
        
        // This leads to a complier error "else’ without a previous ‘if’"
    else{
        printf("bye\n");
    }


return 0;
}