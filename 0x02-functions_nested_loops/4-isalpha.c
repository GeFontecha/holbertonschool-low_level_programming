#include <stdio.h>
#include "main.h"
/**
 * _isalpha - print letters (1 lowercase or uppercase, 0 others)
 * @c: character to check
 *
 * Return: 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
