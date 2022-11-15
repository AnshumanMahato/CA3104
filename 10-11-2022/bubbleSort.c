//implement bubble sort
#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 numbers in array:");
    for(int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Entered Array is: ");
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i =0; i<9; i++){
        int swapped = 0;
        for(int j = 0;j < 9;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        
        if(!swapped)
            break;
    }
    
    printf("\nSorted Array is: ");
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
