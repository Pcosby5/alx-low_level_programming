#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array
  * @size: The size of the array
  * @c: The char to contain the array
  * Return: The array filled
  */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
	{
		s[p] = c;
	}
	return (s);
}
