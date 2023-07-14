#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		if (h != 'e' && h != 'q')
		{
			putchar(h);
		}
		h++;
	}
	putchar('\n');
	return (0);
}
