#include <stdio.h>

int main()
{
    int i, j;
    char a[10], b[10], c[20];
    printf("enter string 1 ");
    scanf("%s", a);
    fflush(stdin);
    printf("enter string 2 ");
    scanf("%s", b);
    for (i = 0; a[i] != '\0'; i++)
        c[i] = a[i];
    for (j = 0; b[j] != '\0'; j++, i++)
        c[i] = b[j];
    c[i] = '\0';
    printf("concatenated string :%s", c);
    return 0;
}
