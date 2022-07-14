#include "main.h"

/**
 * _strncat - a function concatenate two strings atmost n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of src string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len] = *(src + j);
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
