#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints  a square matrix of integers.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate sum of first diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);

	/* Calculate sum of second diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
		sum2 += *(a + i * size + (size - 1 - i));

	printf("%d, %d\n", sum1, sum2);
}

