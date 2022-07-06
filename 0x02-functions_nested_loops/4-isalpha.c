#include "main.h"

/**
 * _isalpha - a function checks letter
 *
 * @c: the character that will be checked if it is alphabet
 *
 * Return: (1) for letters & (0) otherwise
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);
	else
		return (0);
}
