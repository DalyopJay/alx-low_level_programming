#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 * return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int jay = 0;

	while (*(src + jay) != '\0')
	{
		*(dest + jay) = *(src + jay);
		jay++;
	}
	*(dest + jay) = '\0';

	return (dest);
}
