#include <stdio.h>

int main()
{
    int row,col;
    printf("Enter the no. of rows and columns of the matrix: ");
    scanf("%d%d",&row,&col);
    int a[row][col];
    printf("\nEnter %d numbers:",row*col);
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nMatrix is\n");
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nBoundary values are:\n");
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(i==0 || i == row-1 || j==0 || j==col-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    

    return 0;
}
