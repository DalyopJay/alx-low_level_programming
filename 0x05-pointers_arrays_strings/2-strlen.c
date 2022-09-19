#include "main.h"

/**
 *_strlen - returning the length of a string
 * @s:string
 *Return : returns length as integer;
 */

int _strlen(char *s)
{
	int jay = 0;

	while (*(s + jay) != '\0')
		jay++;

	return (jay);
}
