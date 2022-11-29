#include <stdio.h>
int main()
{
    int a = 5, *p;
    printf("the current value of variable is %d\n", a);
    p = &a;
    printf("enter the new value of variable ");
    scanf("%d", p);
    printf("the new value of variable is %d", a);
    return 0;
}
