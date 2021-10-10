#include <stdio.h>
#include "main.h"

/**
* _isupper - function checks whether a character is an uppercase or not.
* @c: The character to print
* Return: 1 if uppercase or 0 others.
*/

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
