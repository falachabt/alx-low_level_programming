#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a fuon each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: functinot NUto by 'action' for each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
