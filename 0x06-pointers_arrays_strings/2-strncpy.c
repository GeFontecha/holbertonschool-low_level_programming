#include "0-main.h"

/**
 * *_strncpy - copy the string to src
 * @src: char src check
 * @n: int, this case number of character
 * @dest: char destin check
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
