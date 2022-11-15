/* Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    // swapping

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d", b);

    return 0;
}
