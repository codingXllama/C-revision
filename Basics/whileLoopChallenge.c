/*
Purpose: TO test ones understand with printfs and how while loops work
Note * '\n' counts as 1 char 
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i = 1;
    while (i <= printf("Hi\n"))
    {
        /* code */
        printf("Hello\n");
        i++;
    }
    printf("i= %d\n", i);

    return 0;
}
