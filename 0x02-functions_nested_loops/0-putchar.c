#include <stdio.h>
#include <string.h>

#include "main.h"

/**
 * main - print word for caracter. 
 *
 * return: return(0)
 */

//char cadenadC[] = "_putchar\n";

int main(void)
{	
	int a = 0;
	for (a=0; a < 9; a++) /*recorre caracter por caracter*/
	{
		putchar(a);
		//putchar(cadenadC[a]);
	}
	
	/*printf("%s\n", cadena);*/
	/*printf("_putchar\n");*/
	return(0);
}


