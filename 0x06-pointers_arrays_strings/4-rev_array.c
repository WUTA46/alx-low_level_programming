#include "main.h"
#include<stdio.h>

/**
 * reverse_array - reverse an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}
