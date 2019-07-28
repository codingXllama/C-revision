/*

The amazing creature 'Pupeta' lives in a funny world where is could be surrounded by at most 8 neighbours.
The behaviour of our hero 'Pupeta' depends on how many neighbours he has at any moment. You need to
lookup for his present behaviour before you could go and deliver his favorite Pizza that he would often order to
your famous Pizza shop.


Write a C Program that will ask for number of neighbour from the user and will print the mood
of 'Pupeta' accordingly. Please note that if the input is invalid, that is < 0 or > 8, then your
program must display error message "Invalid number of neighbours".
 */


#include<stdio.h>

int main()
{

    int userInput;
    printf("Enter a number of neighbours: ");
    scanf("%d",&userInput);

    if(userInput==0)
    {
        printf("Sad and will force you to listen to his story, will make you late.\n");
    }
    else if(userInput==1)
    {
       printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late.\n");
    }
    else if(userInput>=2 && userInput<=5 )
    {
       printf("Will have great mood and will be singing song. May crack joke as well. You will get\n good tips, definitely.\n");
    }
    else if(userInput==7)
    {
        printf("He will be making great drink for his neighbors and will invite you to taste.\nBut will not give you tip..\n");
    }
    else if (userInput==6 || userInput==8)
    {
        printf("Too angry and furious, deliver the pizza and leave ASAP. ");
    }
    else{
        printf("Invalid number of neighbours\n");
    }

    return 0;
}