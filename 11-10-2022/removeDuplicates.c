//Write a c code for removing duplicates from an unsorted array
/* WAP to remove duplicates from an unsorted array */

#include<stdio.h>

int main(){
    int arr[10],arr2[10],k=10;
    printf("Enter 10 numbers in array:");
    for(int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered Array is: ");
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i = 0; i<k; i++){
        for(int j = i+1; j<k; j++){
            if(arr[j] == arr[i]){
                int temp = arr[k-1];
                arr[k-1] = arr[j];
                arr[j] = temp;
                k--;
                j--;
            }
        }
    }
    
    printf("\n\nArray of all distinct elements: ");
    for(int i =0;i<k;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}