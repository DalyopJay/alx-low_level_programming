#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated
 *
 * return: returns @dest
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
