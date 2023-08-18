#ifndef _FUNCTION_VARIADIC_H_
#define _FUNCTION_VARIADIC_H_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include<stdarg.h>

/**
 * struct print - print various format types
 * @idt: char identifier
 * @fptr: function pointer
 */
typedef struct print
{
	char *idt;
	void (*fptr)(va_list);
}t_print;

#endif
