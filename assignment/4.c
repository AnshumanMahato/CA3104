#include <stdio.h>
int gcd(int a, int b)
{
    int r;
    while (a)
    {
        r = b % a;
        b = a;
        a = r;
    }
    return b;
}
int main()
{
    int a, b;
    printf("enter  2 numbers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("the gcd is %d", a < b ? gcd(a, b) : gcd(b, a));
    return 0;
}
