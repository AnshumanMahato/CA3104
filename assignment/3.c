#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    printf("factorial is %d ", fact(n));
    return 0;
}
int fact(int n)
{
    if (n)
        return n * fact(n - 1);
    return 1;
}
