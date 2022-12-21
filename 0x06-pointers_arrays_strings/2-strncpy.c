#include "main.h"
/**
 * _strncpy - c function that copies a string, including the
 * terminating null byte, using inputted number fo bytes.
 *
 * @dest: buffer steering the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
