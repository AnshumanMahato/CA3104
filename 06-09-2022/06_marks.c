/* If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100. */

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp, total, percentage;

    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    total = eng + phy + chem + math + comp;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f", percentage);

    return 0;
}