#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char string[] = "Osa 19 91.34";
    int age;
    double weight;
    char name[30];

    // arg1 => where the sscanf will read from, in this case from the string arr
    // arg2 => contnet type of all the variables that will be required to store the data
    // arg3 => the variables that will be required/assigned to a value from arg2
    // Note ** Don't use '&' for the char arr, and use %s as the data specifier

    sscanf(string, "%s %d %lf", name, &age, &weight);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Weight: %lf\n", weight);

    return 0;
}