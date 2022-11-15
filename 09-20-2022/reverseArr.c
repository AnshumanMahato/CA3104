#include<stdio.h>

int main()
{
    int arr[50], size;
    printf("Enter number of elements : ");
    scanf("%d", &size);
    printf("Enter %d elements of the array : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEntered array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    int front = 0, back = size - 1;
    while (front < back)
    {
        int temp = arr[front];
        arr[front] = arr[back];
        arr[back] = temp;
        front++;
        back--;
    }
    printf("\nEntered array after reversing :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}