#include <stdio.h>
#include "main.h"

/**
 * more_numbers - fail!!
 *
 * Return
 */
void more_numbers(void)
{
	int num;
	char b[] = "1011121314";
	int a;
	int c;

	for (c = 0; c < 10; c++)
	{
	for (num = 48; num <= 57; num++)
	{
	_putchar (num);
	}
	for (a = 0; a < 11; a++)
	{
	_putchar(b[a]);
	}
	_putchar('\n');
	}
}
