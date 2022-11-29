#include <stdio.h>
int main()
{
    int i = 0;
    float sum = 1050;
    while (i < 10)
    {
        printf("%d\n", 105 + 7 * i);
        sum += 7 * i;
        i++;
    }
    printf("\nsum = %.0f \naverage = %.2f", sum, sum / 10);
}
