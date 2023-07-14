#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
