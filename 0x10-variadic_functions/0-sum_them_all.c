#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - prints the sum of all variadic args
 * @n: a constant int
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int p;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (p = 0; p < n; p++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

