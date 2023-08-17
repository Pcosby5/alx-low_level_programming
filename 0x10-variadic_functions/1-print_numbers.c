#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints variadic arguments
 * @separator: char to separate integers
 * @n: const varaidic count/integer
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argc;
	unsigned int p;

	va_start(argc, n);
for (p = 0; p < n; p++)
{
	printf("%d", va_arg(argc, int));
	if (separator && p < n - 1)
	{
		printf("%s", separator);
	}
}
	printf("\n");

	va_end(argc);
}
