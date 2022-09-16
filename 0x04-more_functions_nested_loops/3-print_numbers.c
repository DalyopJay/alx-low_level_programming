include "main.h"
/**
 * print 0-9
 * return 0;
 * */

void print_numbers(void)

{

	int i = 0;


	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
