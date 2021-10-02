#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	//char numero_positivo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
		
	//scanf
	if (n>0)
	{
	//printf("%d\n", n);
	printf("Is positive: %i\n",n);
	}
	else if (n==0)
	{
	printf("Is zero: %i\n", n);
	}
	else 
	{
	printf("Is negative: %i\n", n);
	}
	//if (n>0)
	//{
	//printf("%
	//}
	//printf("%s%lu byte(s)\n", "Size of a char: ", sizeof(char));
	
	
	return (0);
}
