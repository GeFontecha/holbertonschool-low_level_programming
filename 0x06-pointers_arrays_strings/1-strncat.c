#include "0-main.h"
#include <stdio.h>

/**
 * *_strncat - concatena cadenas
 * @dest: dest to string
 * @src: no null-terminated
 * @n: check int
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
	}
	return (dest);
}
