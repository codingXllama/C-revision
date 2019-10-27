// In this example we will look at sprintf and how to use it
// sprintf is similar to printf, but the only difference is sprintf prints INTO a character array, while printf just prints onto the screen

//The sysntax is as follows:  sprintf(storage_charARR,"the content to print with it's format sepcifier", and the variables required to print);
//The Return type: an integer similar to printf, it returns the total number of character that is writting into the char arr
//The Required Header: #include<string.h>

#include <string.h>
#include <stdio.h>

int main(int argc, char argv[])
{

    char buffer[100];
    int age1 = 10, age2 = 20;

    sprintf(buffer, "The sum of %d + %d is %d", age1, age2, (age1 + age2));

    // The content of the buffer is
    printf("%s \n", buffer);

    return 0;
}