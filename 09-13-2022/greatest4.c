/* Write a c program to find biggest value among 4 integers using if-else? */

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, great;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    if (num1 > num2)
    {
        if (num3 > num4)
        {
            if (num1 > num3)
                great = num1;
            else
                great = num3;
        }
        else
        {
            if (num1 > num4)
                great = num1;
            else
                great = num4;
        }
    }
    else
    {
        if (num3 > num4)
        {
            if (num2 > num3)
                great = num2;
            else
                great = num3;
        }
        else
        {
            if (num2 > num4)
                great = num2;
            else
                great = num4;
        }
    }

    printf("%d", great);
    return 0;
}
