#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arr;
	int n,i=0;
	printf("Enter Size: ");
	scanf("%d",&n);
	arr = (int *)malloc(n * sizeof(int));
	printf("Enter %d numbers in array:\n",n);
	while(i<n){
		scanf("%d",arr+i);
		i++;
	}
	printf("\nArray is:\n",n);
	i=0;
	while(i<n){
		printf("%d ",*(arr+i));
		i++;
	}
}
