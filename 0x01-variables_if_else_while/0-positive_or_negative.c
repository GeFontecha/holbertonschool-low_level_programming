#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* main print numbers negative, positive or zero.*/
int main(void)

{
	int n;
		srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*scanf*/
	if (n > 0)
	{
	/*printf("%d\n", n);*/
	printf("%i is positive. \n", n);
	}
	else if (n == 0)
	printf("%i is zero. \n", n);
	if (n < 0)
	printf("%i is negative. \n", n);
	return (0);
}
