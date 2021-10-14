#include "0-main.h"
#include <stdio.h>

/**
 * print_rev - print type char to reverse
 * @s: position the char.
 *
 */

void print_rev(char *s)
{
	int conteo = 0;
	int x;

	while (*(s + conteo))
	{
		conteo++;
	}
	for (x = conteo - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
