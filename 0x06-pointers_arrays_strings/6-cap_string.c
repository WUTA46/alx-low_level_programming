#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @c: input character
 * Return: c
 */

char *cap_string(char *c)
{
	int i, j;
	char cc[] = {' ', ',', ';', '\n', '\t', '.', '!', '?', '"', '(', ')',
'{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		for (j = 0; cc[j] != '\0'; j++)
		{
			if (c[i] == cc[j])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				{
					c[i + 1] -= 32;
				}
			}
		}
	}
	return (c);
}
