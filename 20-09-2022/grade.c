#include<stdio.h>

int main(){
    int marks,sum;
    float avg;
    marks=0;
    printf("Enter marks of 5 subjects out of 100:\n");
    for(int i =1; i<=5; i++){
        printf("Enter marks of subject %d: ",i);
        scanf("%d",&marks);
        sum+=marks;
    }
    avg = sum/5.0;
    printf("\nAverage Marks: %.2f",avg);
    printf("\nGrade: ");
    switch (sum/5)
    {
    case 91 ... 100:
        printf("Ex");
        break;
    case 81 ... 90:
        printf("A");
        break;
    case 71 ... 80:
        printf("B");
        break;
    case 61 ... 70:
        printf("C");
        break;
    case 51 ... 60:
        printf("D");
        break;
    default:
        printf("Fail");
        break;
    }
    return 0;
}