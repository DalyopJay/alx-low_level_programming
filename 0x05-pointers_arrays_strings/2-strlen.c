#include "main.h"

/**
 *_strlen(char *s) - returning the length on an string
 * @s:string
 *Return : returns length as string;
 */

int _strlen(char *s)
{
	int jay = 0;

	while (*(s + jay) != '\0')
		jay++;

	return (jay);
}
