#include <stdio.h>
struct stud
{
    char name[20];
    int roll_no;
    int age;
    int marks;
    char grade;
};
void printgradecard(struct stud);
int main()
{
    struct stud stu;
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("enter name of student : ");
        gets(stu.name);
        printf("enter roll no of student : ");
        scanf("%d", &stu.roll_no);
        printf("enter age of student : ");
        scanf("%d", &stu.age);
        printf("enter marks of student : ");
        scanf("%d", &stu.marks);
        printgradecard(stu);
        printf("\n");
    }

    return 0;
}

void printgradecard(struct stud stu)
{
    printf("\n________________");
    ;
    printf("\n   Grade Card   ");
    printf("\nName: %s", stu.name);
    printf("\nAge: %d", stu.age);
    printf("\nRoll No: %d", stu.roll_no);
    printf("\nMarks: %d\n", stu.marks);
    switch (stu.marks)
    {
    case 90 ... 100:
        printf("Grade O");
        break;
    case 80 ... 89:
        printf("Grade A");
        break;
    case 70 ... 79:
        printf("Grade B");
        break;
    case 60 ... 69:
        printf("Grade C");
        break;
    case 50 ... 59:
        printf("Grade D");
        break;
    case 36 ... 49:
        printf("Pass");
        break;
    default:
        printf("Fail");
        break;
    }
    printf("\n________________");
    ;
    printf("\n");
}
