#include <stdio.h>

int main()
{
    int n;
    int p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1 || n == 0)
    {
        printf("The fact is 1");
    }
    else
    {
        while (n > 0)
        {
            p *= n;
            n--;
        }
    }
    printf("The fact of %d is %d ", n, p);

    return 0;
}