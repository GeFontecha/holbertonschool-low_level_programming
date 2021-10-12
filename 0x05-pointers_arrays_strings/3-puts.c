#include <stdio.h>
#include "0-main.h"

void _puts(char *str)
{
	int s;
	
	s = 0;
		
	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');

}
