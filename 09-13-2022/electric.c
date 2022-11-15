// C Program to Calculate Electricity Bill
#include <stdio.h>
int main()
{
    int curr, prev, units;
    float cost, amount, charge, total_amount;
    const float fixed_charge = 250;

    printf("Enter previous reading: ");
    scanf("%d", &prev);
    printf("Enter current reading: ");
    scanf("%d", &curr);

    units = curr - prev;

    if (units <= 100)
        cost = 5;
    else if (units <= 200)
        cost = 7;
    else if (units <= 500)
        cost = 10;
    else
        cost = 12;

    // Displaying output
    amount = units * cost + fixed_charge;
    total_amount = 1.18 * amount;
    printf("Units: %d\n", units);
    printf("Cost per Unit: %.2f\n", cost);
    printf("Fixed Charge: %.2f\n", fixed_charge);
    printf("Total Amount: %.2f\n", amount);
    printf("Net Pay: %.2f", total_amount);

    return 0;
}