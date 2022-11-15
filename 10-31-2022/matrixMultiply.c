#include <stdio.h>

int main()
{
    int row1,col1,row2,col2;
    printf("Enter the no. of rows and columns for matrix A: ");
    scanf("%d%d",&row1,&col1);
    printf("Enter the no. of rows and columns for matrix B: ");
    scanf("%d%d",&row2,&col2);
    if(col1 != row2){
        printf("\n%dX%d matrix cannot be multiplied with %dX%d matrix.\n",row1,col1,row2,col2);
        return 0;
    }
    int a[row1][col1],b[row2][col2],c[row1][col2];
    printf("\nEnter %d numbers fo matrix A:",row1*col1);
    for(int i =0;i<row1;i++){
        for(int j =0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter %d numbers fo matrix B:",row2*col2);
    for(int i =0;i<row2;i++){
        for(int j =0;j<col2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\nMatrix A is\n");
    for(int i =0;i<row1;i++){
        for(int j =0;j<col1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B is\n");
    for(int i =0;i<row2;i++){
        for(int j =0;j<col2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix A * Matrix B:\n");
    for(int i =0;i<row1;i++){
        
        for(int j =0;j<col2;j++){
               c[i][j] =0;
               int k = 0;
               while(k<col1){
                   c[i][j] += a[i][k] * b[k][j];
                   k++;
               }
               printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
