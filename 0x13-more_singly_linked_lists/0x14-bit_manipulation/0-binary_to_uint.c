#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: pointer to the string
 * Return: void
*/


int _strlen(const char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int p, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (p = 0; p != len; p++)
	{
		if (b[len - p - 1] == '1')
			n += 1 << p;
		else if (b[len - p - 1] != '0')
			return (0);
	}

	return (n);
}
