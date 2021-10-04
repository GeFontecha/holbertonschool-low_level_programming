#include <stdio.h>
/*
*combinatoria numeros un solo digit.
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
	}
	putchar('\n');
	return (0);
}
