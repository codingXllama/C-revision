// In this Example we will avoid reading a string as an input for the sscanf function

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv)
{
    char someString[] = "My Name: Osama and Age: 10 and weight: 99";
    char name[40];
    int age;
    double weight;

    sscanf(someString, "%*s %*s %s %*s %*s %d %*s %*s %lf", name, &age, &weight);
    printf("Your Name is: %s\n", name);
    printf("Your age is: %d\n", age);
    printf("Your weight is: %.2lf\n", weight);

    return 0;
}