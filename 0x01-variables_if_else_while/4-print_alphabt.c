#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 <Success>
 */
int main(void)

{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	/*alfabeto en minúscula */

		putchar ('\n');	/*salto de línea*/
return (0);
}
