/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */

#include <stdio.h>

int main()
{
    int distance;
    float meter, feet, inches, centimeter;

    printf("Enter the distance [in Kilometers]: ");
    scanf("%d", &distance);

    meter = distance * 1000;
    feet = distance * 3280.84;
    inches = distance * 39370.1;
    centimeter = distance * 100000;

    printf("Meter = %.2f\n", meter);
    printf("Feet = %.2f\n", feet);
    printf("Inches = %.2f\n", inches);
    printf("Centimeters = %.2f\n", centimeter);
}