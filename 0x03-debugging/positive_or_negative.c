#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 <Success>
*/
void positive_or_negative(void)
{
	
		srand(time(0));
	i = rand() - RAND_MAX / 2;
	
	if (i > 0)
	printf("%i is positive \n", i);
	
	else if (i == 0)
	printf("%i is zero \n", i);
	
	else
	printf("%i is negative \n", i);
	
	return;
}
