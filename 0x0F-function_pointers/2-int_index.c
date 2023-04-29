#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - searches for an iarray using a function pointer
 * @array: array to search in
 * @size: size of the array
 * @cmp: functiontion takes an int argument and returns int
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
