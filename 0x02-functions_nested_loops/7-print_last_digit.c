#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to use
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
	a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
