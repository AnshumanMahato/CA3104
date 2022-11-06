#include <stdio.h>

int main()
{
    int row,col;
    printf("Enter the no. of rows and columns for the matrices: ");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col];
    printf("\nEnter %d numbers fo matrix A:",row*col);
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter %d numbers fo matrix B:",row*col);
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\nMatrix A is\n");
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B is\n");
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix A + Matrix B:\n");
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
                printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
