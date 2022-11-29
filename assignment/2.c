#include <stdio.h>

int main()
{
    int n, i;
    printf("enter a number ");
    scanf("%d", &n);
    i = 1;
    while (n > 1)
    {
        i *= n;
        n--;
    }
    printf("factorial is %d ", i);
    return 0;
}
