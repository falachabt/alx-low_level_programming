#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: this function return nothing
 */

void swap_int(int *a, int *b)
{
	int prev;

	prev = *a;
	*a = *b;
	*b = prev;
}
