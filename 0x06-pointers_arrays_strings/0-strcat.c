#include "0-main.h"
#include <stdio.h>

/**
 * *_strcat - concatena dos strings
 * @dest: dest the string
 * @src: check string src
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int a, n;

	a = 0;
	n = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[n] != '\0')
	{
		dest[a + n] = src[n];
		n++;
	}
	src[n] = '\0';
	return (dest);

}
