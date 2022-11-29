#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    int i, n;
    printf("Enter a String: \n");
    scanf("%s", a);

    n = strlen(a);
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
