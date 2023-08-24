#include "lists.h"
#include <stdio.h>

/**
 * _strlen - returns the length of string
 * @str: string who is about to be checked
 * Return: length of string
 */



int _strlen(char *str)
{
	int j = 0;

	if (str == NULL)
	{
		return (0);

	}
	while (str++)
		j++;
	return (j);
}



/**
 * print_list - prints all element of a list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t p = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		p++;

		h = h->next;

	}
	return (p);
}
