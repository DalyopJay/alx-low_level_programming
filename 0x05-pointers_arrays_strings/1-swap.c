#include "main.h"

/**
 *swap_int - swat two ints values
 *@a:first int
 *@b:second int
 *return:void
*/

void swap_int(int *a, int *b)
{
	int jay = *a;

	*a = *b;
	*b = jay;
}
