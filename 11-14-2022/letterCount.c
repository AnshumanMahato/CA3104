#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int isvowel(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return 1;
	else
		return 0;
}

int main()
{
	char str[1000];
	int i = 0, letters = 0, vowels = 0, words = 0;
	printf("Enter Sentence:\n");
	gets(str);
	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
		{
			letters++;
			if (isvowel(str[i]))
				vowels++;
		}
		else if (str[i] == ' ')
			words++;
		i++;
	}

	printf("letters:%d\nvowels: %d\nconsonants: %d\nwords: %d", letters, vowels, letters - vowels, words + 1);
	return 0;
}
