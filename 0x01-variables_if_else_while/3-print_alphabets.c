#include <stdio.h>

/**
 * main - Entry point
 * lowescase and uppercase alphabet
 * Return: Always 0 <Success>
*/
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
