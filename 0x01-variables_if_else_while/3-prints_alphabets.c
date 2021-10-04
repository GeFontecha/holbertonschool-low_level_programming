#include <stdio.h>

/*alfabeto en minúscula y mayuscula*/
/* lowescase and uppercase alphabet */
int main(void)

{
	char a = 'a';
	char A = 'A';
		while (a <= 'z')
	{
		putchar(a);
		a++;
	/*char charb=b;*/
	}
		while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
		putchar ('\n');	/*salto de línea*/
return (0);
}
