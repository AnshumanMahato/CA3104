#include <stdio.h>
#include <stdlib.h>

int *arr, s, len = 0;

void insertValue()
{
	if (len == s)
	{
		printf("\nArray is full\n");
		return;
	}
	printf("\nEnter Value:");
	scanf("%d", arr + len);
	printf("\n%d pushed to Array\n", *(arr + len++));
}

void deleteValue()
{
	int i, val, val_exists = 0;
	if (!len)
	{
		printf("\nArray is empty\n");
		return;
	}
	printf("\nEnter Value to be deleted:");
	scanf("%d", &val);
	if (arr[len - 1] == val)
		val_exists = 1;
	else
		for (i = 0; i < len - 1; i++)
		{

			if (val_exists || *(arr + i) == val)
			{
				val_exists = 1;
				*(arr + i) = *(arr + i + 1);
			}
		}
	if (val_exists)
	{
		printf("\n%d has been deleted\n", val);
		len--;
	}
	else
		printf("\n%d is not in Array\n", val);
}

void printArray()
{
	if (!len)
	{
		printf("\nArray is empty\n");
		return;
	}
	printf("\nArray is\n");
	for (int i = 0; i < len; i++)
		printf("%d ", *(arr + i));
	printf("\n");
}

int main()
{
	int ch;
	printf("Enter the size for your array:");
	scanf("%d", &s);
	arr = (int *)malloc(sizeof(int) * s);
	do
	{
		printf("\n MENU \n");
		printf("\n1. Insert");
		printf("\n2. Delete");
		printf("\n3. Print");
		printf("\n4. Exit");
		printf("\nEnter Choice(1-4):");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			insertValue();
			break;
		case 2:
			deleteValue();
			break;
		case 3:
			printArray();
			break;
		case 4:
			printf("\nExiting...\n");
			break;
		default:
			printf("\nInvalid Value. Enter Between 1-4...\n");
		}
	} while (ch != 4);

	return 0;
}
