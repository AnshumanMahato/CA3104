#include <stdio.h>
#include <math.h>

int main()
{
    double principle, rate, time, amount, CI;

    printf("Enter principle (amount): ");
    scanf("%lf", &principle);

    printf("Enter time: ");
    scanf("%lf", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    amount = principle *
             ((pow((1 + rate / 100),
                   time)));
    CI = amount - principle;

    printf("Compound Interest is : %.2lf", CI);
    return 0;
}
