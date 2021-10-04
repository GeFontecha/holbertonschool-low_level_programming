#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main  */
/* betty style doc for function main goes there */
/* positive or naegative, gre5orless5.*/
/* a partir de numbers generados de manarea randomica */ 
int main(void)
{
	int n;
	int last_digit;
		srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*scanf*/
	last_digit = (n % 10);
	if (last_digit > 5)
	{
	/*printf("%d\n", n);*/
	/*printf("%i is positive \n", n);*/
	printf("Last digit of %i is %i and is greater than 5 \n", n, last_digit);
	}
	else if (last_digit == 0)
	{
	printf("Last digit of %i is %i and is 0 \n", n, last_digit);
	/*printf("%i is zero \n", n);*/
	}
	else  (last_digit != 0 && last_digit < 6);
	{
	printf("Last digit of %i is %d and is less than 6 and not 0 \n", n, last_digit);
	}
	return (0);
}
