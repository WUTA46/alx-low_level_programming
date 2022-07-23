#include "main.h"

/**
 * _memset - function fills number of bytes of memory with some value
 * @s: a pointer to the first element
 * @b: a value that will be filled
 * @n: number of memory bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
