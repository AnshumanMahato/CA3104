/*
Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.
*/

#include <stdio.h>

int main()
{
    float gross_salary, basic, da, ta;

    printf("Enter basic salary : ");
    scanf("%f", &basic);

    da = (40 * basic) / 100;
    ta = (20 * basic) / 100;

    gross_salary = basic + da + ta;

    printf("\nGross salary : %.2f", gross_salary);
    return (0);
}