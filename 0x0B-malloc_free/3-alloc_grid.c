#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the created array (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (j = 0; j <= i; j++)
				free(a[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return a;
}
