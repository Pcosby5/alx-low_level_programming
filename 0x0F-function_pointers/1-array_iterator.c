#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p = 0;

	if (array != NULL && action != NULL && size > 0)
		for (p = 0; p < size; p++)
			action(array[p]);
}
