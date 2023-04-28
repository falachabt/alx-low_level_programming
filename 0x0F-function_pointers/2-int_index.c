#include "function_pointers.h"

/**
 * int_index - the function  will find  an integere
 *
 * @array: the array in which we wil find the integer
 * @size: the size of the array 
 * @cmp: the function use to find the integer
 *
 * Return: the index of the find element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	bool find = false;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
		{
			find = true;
			return (i);
		}
	}

	if (!find)
		return (-1);
}

		




