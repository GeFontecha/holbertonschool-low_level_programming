#include <stdio.h>
#include "0-main.h"

/**
 * _puts - prints string array
 *
 * @str: cadena a imprimir
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
