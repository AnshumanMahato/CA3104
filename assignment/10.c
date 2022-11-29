#include <stdio.h>

int isLeapYear(int);

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year.", year);

    else
        printf("%d is not a leap year.", year);

    return 0;
}

int isLeapYear(int year)
{
    return !(year % 400) || (!(year % 4) && (year % 100));
}