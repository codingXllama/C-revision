#include<stdio.h>


int main()
{
    // This form of printf will first print the content inside the printf //output will be: Special
    //2: it will store the number of characters inside the printf into the variable specialWord
    //On line 1ine 10 the output will be Special7  , where 7 is the number of chars inside the word Special
    int specialWord=printf("Special");
    printf("%d\n",specialWord);   

    // Second kind of printf
    // this kind of print prints the inner printf and then that outter printf will print the number of characters in the inner printf
    printf("%d",printf("hi"));
    printf("\"Hello\"");




    return 0;
}