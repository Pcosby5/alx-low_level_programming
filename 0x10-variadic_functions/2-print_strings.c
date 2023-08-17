#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints variadic arguments
 * @separator: char to separate string
 * @n: const varaidic count/integer
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argc;
	unsigned int p;
	char *string;


	va_start(argc, n);
for (p = 0; p < n; p++)
{
	string = va_arg(argc, char *);

	if (string)
		printf("%s", string);
	else
		printf(("nil"));
	if (separator && p < n - 1)
	{
		printf("%s", separator);
	}
}
	printf("\n");

	va_end(argc);
}
