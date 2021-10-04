#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 <Success>
*/
int main(void)
{
	char cero = '0';
	char a = 'a';

	while (cero <= '9')
	{
		putchar(cero);
		cero++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
