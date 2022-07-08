#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a : the first integer
 * @b : the second integer
 * @c : the third integer
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a == b || a == c || b == c))
	{
		if (a == b && a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}

		if (a == c && a > b)
		{
			largest = a;
		}
		else
		{
			largest = b;
		}

		if (b == c && b > a)
		{
			largest = b;
		}
		else
		{
			largest = a;
		}
	}
	else
	{
		if (a > b && a > c)
		{
			largest = a;
		}
		else if (b > a && b > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}

	return (largest);
}
