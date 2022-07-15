#include "main.h"

/**
 * leet - a function encode a string
 * @c: input string
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	char alph[] = {"AaEeOoTtLl"};
	char num[] = {"4433007711"};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == alph[j])
			{
				c[i] = num[j];
			}
		}
	}

	return (c);
}
