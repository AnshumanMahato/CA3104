#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of square the matrix: ");
    scanf("%d",&size);
    int a[size][size];
    printf("\nEnter %d numbers:",size*size);
    for(int i =0;i<size;i++){
        for(int j =0;j<size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nMatrix is\n");
    for(int i =0;i<size;i++){
        for(int j =0;j<size;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal values are:\n");
    for(int i =0;i<size;i++){
        for(int j =0;j<size;j++){
            if(i==j || i+j == size-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    

    return 0;
}
