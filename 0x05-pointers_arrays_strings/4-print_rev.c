#include "main.h"
#include<stdio.h>

/**
 * print_rev - a function print string reverse
 * @s: the input string
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	int len;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		putchar(*(s + j));
	}

	putchar('\n');
}

