#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("enter value of 2 variables: ");
    scanf("%d %d", &a, &b);
    printf("\nthe current values of variables: %d %d", a, b);
    swap(&a, &b);
    printf("\nthe swapped values of variables: %d %d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
