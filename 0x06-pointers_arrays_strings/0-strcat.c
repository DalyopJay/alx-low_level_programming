#include "main.h"

/**
 * strcat - concatenate the string pointed to by @src, including the terminating null byte, to the end of the string pointed to by @dest.
 *
 * @dest: a pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest
 *
 * return: a pointer to the destination string @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
