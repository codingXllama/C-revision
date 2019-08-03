// Finding the max of 3 numbers in c

#include<stdio.h>

int main()
{
    int a,b,c,max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    // checking what is the max value
    if (a>b && a>c)
        max=a;
    else if (b>a && b>c)
        max=b;
    else
        max=c;

    printf("The max value is: %d\n",max);

    return 0;
}