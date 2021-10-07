#include "main.h"

/**
 * print_last_digit - Print last digit of a number.
 * @a: Number to eval
 * Return: return to a.
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
