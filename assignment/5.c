
#include <stdio.h>
int gcd(int num1, int num2)
{
    if (num1)
        return gcd(num2 % num1, num1);
    return num2;
};
int main()
{
    int a, b;
    printf("enter  2 numbers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("the gcd is %d", a < b ? gcd(a, b) : gcd(b, a));
    return 0;
}
