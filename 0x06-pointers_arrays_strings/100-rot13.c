#include "main.h"

/**
 * rot13 - encode string using rot13
 * @c: input string
 * Return: c
 */

char *rot13(char *c)
{
	int i, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ralph[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (c[i] == alph[j])
			{
				c[i] = ralph[j];
				break;
			}
		}
	}

	return (c);
}

