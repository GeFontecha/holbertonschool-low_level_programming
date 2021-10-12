#include "0-main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - count string characters
 * @s: position str.
 *
 * Return: contador.
 */

int _strlen(char *s)
{
	int a;/*contador*/

	a = 0;

	while (*(s + a))
	{
	a++;
	}
	return (a);
}
