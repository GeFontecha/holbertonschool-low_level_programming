#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign numbers
 *
 * Return: 1 if n greater than zero, 0 if n is zero or -1 if n is -
 *
 * @n: Print character correct
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
