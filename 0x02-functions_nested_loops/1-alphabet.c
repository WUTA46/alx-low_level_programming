#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets
 *
 * Return: nothing to return
 */

void print_alphabet(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
