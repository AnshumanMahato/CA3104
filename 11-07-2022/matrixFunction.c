#include <stdio.h>

void input(int a[][100], int row, int col){
	int i,j;
    printf("\nEnter %d numbers:",row*col);
    for(i =0;i<row;i++){
        for(j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void output(int a[][100], int row, int col){
    int i,j;
    for(i =0;i<row;i++){
        for(j =0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void boundaryValues(int a[][100], int row, int col)
{   
	int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==0 || i == row-1 || j==0 || j==col-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        } 
        printf("\n");
    }

}

void diagonalValues(int a[][100],int size)
{
	int i,j;
    for(i =0;i<size;i++){
        for(j =0;j<size;j++){
            if(i==j || i+j == size-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void matrixAdd(int a[][100],int b[][100], int row, int col)
{
    int i,j;
    for(i =0;i<row;i++){
        for(j =0;j<col;j++){
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }

}


int main()
{	
	int row,col;
	int arr1[100][100],arr2[100][100];
    printf("Enter the no. of rows and columns for matrices: ");
    scanf("%d%d",&row,&col);
    
    
    printf("Enter values in matrix A");
    input(arr1,row,col);
    printf("Enter values in matrix B");
    input(arr2,row,col);
    
    printf("\nMatrix A is\n");
    output(arr1,row,col);
    printf("\nMatrix B is\n");
    output(arr2,row,col);
    
    printf("\nBoundary values of Matrix A are:\n");
    boundaryValues(arr1,row,col);
    printf("\nBoundary values of Matrix B are:\n");
    boundaryValues(arr2,row,col);
    
    printf("\nMatrix A + Matrix B:\n");
    matrixAdd(arr1,arr2,row,col);
    
    if(row == col){
    	printf("\nDiagonal values of Matrix A are:\n");
    	diagonalValues(arr1,row);
		printf("\nDiagonal values of matrix B are:\n");
		diagonalValues(arr2,row);
	}
	
	else
		printf("\nNot possible as matrices are not square matrices");
    return 0;
}
