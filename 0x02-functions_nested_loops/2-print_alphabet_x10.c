#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10x
 *
 * Return: Nothing to return
 */

void print_alphabet_x10(void)
{
	char alph;

	for (int i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
