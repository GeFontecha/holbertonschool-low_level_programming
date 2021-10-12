#include <stdio.h>
#include "0-main.h"

/**
 * _puts - prints string array
 *
 * @str: cadena a imprimir
 */

void _puts(char *str)
{
	int s;

	s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');

}
