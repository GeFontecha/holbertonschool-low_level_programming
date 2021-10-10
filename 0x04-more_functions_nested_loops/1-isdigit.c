#include <stdio.h>
#include "main.h"

/**
 * _isdigit - hetest without a character is a decimial digit
 * @c: character to test.
 * Return: The function return 1 if char is digit (0 - 9).
 */

int _isdigit(int c)
{
	if (c >=  48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
