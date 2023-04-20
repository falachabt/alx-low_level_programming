#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 *
 * @array: the array of element
 * @size: the size of the array of element
 * @action: the function to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	
	if(!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
