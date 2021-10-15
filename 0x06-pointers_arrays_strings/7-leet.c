#include "0-main.h"
#include <stdio.h>
/**
 * *leet - encodes a string into 1337-replace
 * @str: string
 * Return: str ecoded
 */
char *leet(char *str)
{
	int i, j;
	char array_letters[10] = {'A', 'a', 'O', 'o', 'E', 'e', 'T', 't', 'L', 'l'};
	int array_code[5] = {4, 0, 3, 7, 1};

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == array_letters[j])
			{
				str[i] = 48 + array_code[j / 2];
			}
		}
		i++;
	}
	return (str);
}
