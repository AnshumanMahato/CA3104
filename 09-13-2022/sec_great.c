/* Write a c program to find 2nd highest number among 3 values? */
#include <stdio.h>

int main()
{

    int a, b, c, max2;

    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b >= c)
            max2 = b;
        else
            max2 = c;
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
            max2 = a;
        else
            max2 = c;
    }

    // c is the largest number of the three
    else if (a >= b)
        max2 = a;
    else
        max2 = b;

    printf("\n\n%d is the 2nd largest number\n", max2);
    return 0;
}