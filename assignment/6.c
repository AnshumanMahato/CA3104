#include <stdio.h>
int main()
{
    char a[50];
    printf("enter a string : ");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] -= 32;
    }
    printf("Lowercase String: %s", a);
    return 0;
}
