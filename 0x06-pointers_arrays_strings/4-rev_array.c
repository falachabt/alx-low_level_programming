#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to reverse
 * @n: the number of elements in the array
 *
 * Description: This function takes in two arguments: an array of integers `a`
 * and the number of elements in the array `n`. It uses a temporary variable
 * `temp` to swap the elements of the array in place. The function iterates
 * through half of the array and swaps the first and last elements, then moves
 * inward until all elements have been swapped.
 */
void reverse_array(int *a, int n)
{
	int i; /* counter variable */
	int temp; /* temporary variable for swapping */

	/* iterate through half of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* swap elements using temporary variable */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
