#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the content of args
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
