#include<stdio.h>


int main(int argc, char const *argv[])
{
    int myVar=10;
    printf("The value of my var is: %d. In integer we get: %d\n",myVar,myVar);
    printf("The value of my var is: %d In Octal, base 8 we get: %o\n",myVar,myVar);
    printf("The value of my var is: %d In Hex, base 16 we get: %x\n",myVar,myVar);

    return 0;
}
