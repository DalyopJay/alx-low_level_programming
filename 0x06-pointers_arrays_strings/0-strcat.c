#include "main.h"
#include <string.h>

/**
 *_strcat - concatenates two strings @dest, @src
 *@dest: pointer to char
 *@src: pointer to char
 *return: returns @dest
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
