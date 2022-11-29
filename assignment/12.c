#include <stdio.h>

struct stud
{
    char name[20];
    int roll_no;
    int age;
    int marks;
};
int main()
{
    struct stud a[5];
    int i;
    float total = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter name of student : ");
        fflush(stdin);
        gets(a[i].name);
        printf("enter roll no of student : ");
        scanf("%d", &a[i].roll_no);
        printf("enter age of student : ");
        scanf("%d", &a[i].age);
        printf("enter marks of student : ");
        scanf("%d", &a[i].marks);
        total += a[i].marks;
        printf("\n");
    }
    printf("\navg marks of class is %.2f", (total / 5));
    return 0;
}
