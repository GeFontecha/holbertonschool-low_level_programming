#include <stdio.h>

#include "main.h"

/**
 * print_alphabet_x10 - print alphabet-X10
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
		_putchar (a);
		/*_putchar ('\n');*/
		}
		_putchar (10);
	/*_putchar ('\n');*/
	}
}
