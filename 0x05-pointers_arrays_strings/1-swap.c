#include "main.h"

/**
 * swap_int - a function swap two integers
 * @a: pointer to the first integer a
 * @b: pointer to the second integer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
