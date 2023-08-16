#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search integer from
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array != NULL  && cmp != NULL)
	{
		for (p = 0; p < size; p++)
		{
			if (cmp(array[p]) != 0)
				return (p);
		}
	}

	return (-1);
}
