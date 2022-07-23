#include "main.h"

/**
 * _memcpy - copy n byte from src to des
 * @dest: destination
 * @src: source
 * @n: byte number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
