/* Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees. */

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius: %f \n", celsius);
    return 0;
}