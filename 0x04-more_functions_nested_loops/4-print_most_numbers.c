#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - exept 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
