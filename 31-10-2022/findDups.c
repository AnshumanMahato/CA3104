#include <stdio.h>

int main(){
    int row,col;
    printf("Enter the no. of rows and columns for the matrices: ");
    scanf("%d%d",&row,&col);
    int a[row * col];
    printf("\nEnter %d numbers:", row * col);
    for (int i = 0; i < row * col; i++){
        scanf("%d", &a[i]);
    }

    printf("\nMatrix is\n");
    for (int i = 0; i < row * col; i++){
        if (i % col == 0)
            printf("\n");
        printf("%d ", a[i]);
    }

    printf("\nDuplicate positions:\n");
    for (int i = row * col - 1; i >= 0; i--){
        if (a[i] != 0){
            printf("%d : ", a[i]);
            int dup = 0;
            for (int j = i - 1; j >= 0; j--){
                if (a[i] == a[j]){
                    a[j] = 0;
                    printf("(%d,%d) ", j / col, j % col);
                    dup = 1;
                }
            }
            if (!dup)
                printf(" No Duplicates");
            printf("\n");
        }
    }

    printf("\nUnique Matrix is\n");
    for (int i = 0; i < row * col; i++){
        if (i % col == 0)
            printf("\n");
        if (a[i])
            printf("%d ", a[i]);
        else
            printf("  ");
    }

    return 0;
}