#include "main.h"
#include <stdio.h>

/**
 * _abs - absolut value of integer
 * @n: integer to check
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)

		(n *= -1);

	return (n);
}
