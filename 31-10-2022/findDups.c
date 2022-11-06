#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of square the matrix: ");
    scanf("%d", &size);
    int a[size][size];
    printf("\nEnter %d numbers:", size * size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nDuplicate positions:\n");
    for (int i = size * size - 1; i >= 0; i--)
    {
        if (*(*a + i) != 0)
        {
            printf("%d : ", *(*a+i));
            int dup =0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (*(*a + i) == *(*a + j)){
                    *(*a + j) = 0;
                    printf("(%d,%d) ", j/size , j%size);
                    dup = 1;
                }
            }
            if(!dup)
                printf(" No Duplicates");
            printf("\n");
        }
    }

    printf("\nMatrix is\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(a[i][j])
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}