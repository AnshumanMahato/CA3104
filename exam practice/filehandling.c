#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char str[30];
    fp = fopen("hello.txt", "r");
    if (!fp)
    {
        printf("File not found");
        return 1;
    }
    while (1)
    {
    }
    return 0;
}
