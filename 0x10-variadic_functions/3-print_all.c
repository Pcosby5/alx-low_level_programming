#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints anything
  * @format: The data type to prints
  * Return: Nothing
  */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int k = 0, start = 0;
	char *p;

	va_start(args, format);
	for (k = 0; format && format[k] != '\0'; k++)
	{
		switch (format[k])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(args, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(args, double));
			break;
		case 's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(args, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
	}
	va_end(args);
	printf("\n");
}
