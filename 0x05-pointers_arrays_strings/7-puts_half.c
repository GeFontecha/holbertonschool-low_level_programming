#include "0-main.h"

/**
 * puts_half - half of a string
 *
 * @str: Check str
 *
 */
void puts_half(char *str)
{
	int cont = 0;
	int n;

	while (str[cont] != '\0')
	{
		cont++;
	}
	if (cont % 2 == 0)
	{
		n = cont / 2;
	}
	else
	{
		n = (cont + 1) / 2;
	}
	while (str[n] != 0)
	{
		_putchar (str[n]);
		n++;
	}
	_putchar ('\n');
}
