#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Return 0
 */


int main(void)
{
	int comb = '0';

	while (comb <= '9')
	{
		putchar(comb);
		if (comb != '9')
		{
			putchar(',');
			putchar(' ');
		}
		comb++;
	/* combinatoria numeros un solo digit.*/
	}
	putchar('\n');
	return (0);
}
