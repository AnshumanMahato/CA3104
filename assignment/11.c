
#include <stdio.h>
int main()
{
    char *a;
    int i, n;
    printf("enter size of string");
    scanf("%d", &n);
    fflush(stdin);
    printf("enter a string\n");
    gets(a);

    for (i = 0; i < (n / 2); i++)
    {
        if (a[i] != a[n - i - 1])
            break;
    }
    if (i == (n / 2))
        printf("string is palindrome");
    else
        printf("string is not palindrome ");
    return 0;
}
