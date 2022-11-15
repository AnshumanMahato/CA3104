#include <stdio.h>
#include <conio.h>

int main()
{
	char name1[100], name2[100], name3[100];
	int i = 0;
	printf("Enter your name1:\n");
	while (1)
	{
		scanf("%c", &name1[i]);
		if (name1[i] == '\n')
		{
			name1[i] = '\0';
			break;
		}
		i++;
	}
	printf("Enter your name2:\n");
	scanf("%[^\n]s", name2);
	fflush(stdin);
	printf("Enter your name3:\n");
	gets(name3);

	printf("\nName1: %s", name1);
	printf("\nName2: %s", name2);
	printf("\nName3: %s", name3);
	return 0;
}
