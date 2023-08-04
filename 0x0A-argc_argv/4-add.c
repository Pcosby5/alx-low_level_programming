#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;
	unsigned int p, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (p = 0; p < strlen(c); p++)
			{
				if (c[p] < 48 || c[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
