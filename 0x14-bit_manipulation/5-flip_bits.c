#include "main.h"

/**
 * flip_bits - returns number of differing bits between 2 binary numbers
 * @n: the first bit word
 * @m: the second bit word
 * Return: the hamming distance
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, temp;

	temp = n ^ m;

	while (temp)
	{
		if ((temp & 1) == 1)
			count++;
		temp >>= 1;
	}

	return (count);
}
