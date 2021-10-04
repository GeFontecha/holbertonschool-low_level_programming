#include <stdio.h>

/*alfabeto en minúscula */
/* lowescase alphabet, exepction e and q */
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

		putchar ('\n');	/*salto de línea*/
return (0);
}
