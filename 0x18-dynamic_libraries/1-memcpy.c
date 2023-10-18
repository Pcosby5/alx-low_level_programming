#include "main.h"

/**
 * _memcpy -The Entry point
 * @dest: The destination input
 * @src: The source input
 * @n: input
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
