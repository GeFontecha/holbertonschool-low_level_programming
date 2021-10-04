#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 <Success>
*/
int main(void) /* void main*/

{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	/*zyx...a*/

	}
	putchar('\n');
	return (0);
}
