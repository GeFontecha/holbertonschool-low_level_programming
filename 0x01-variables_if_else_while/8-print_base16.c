#include <stdio.h>

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
