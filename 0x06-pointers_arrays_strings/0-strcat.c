#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 *  the end of the string point to by @dest
 * @dest: the string that would be appended
 * @src: string to be concatenated upon
 *
 * Return:vreturn the pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (indez = 0; src[index]; index++)
		desr[dest_len++] = src[index];

	return (dest);
}
