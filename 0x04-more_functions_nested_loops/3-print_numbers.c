#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers {0..9} whit _putchar.
 *
(*
 * Return: void.
 */
void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
