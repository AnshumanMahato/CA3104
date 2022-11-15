#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value for a:");
    scanf("%d", &a);
    printf("Enter value for b:");
    scanf("%d", &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", (float)a / b);
    return 0;
}