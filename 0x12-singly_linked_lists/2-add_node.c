#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The first linked list pointer header
 * @str: The string to add to the node
 * Return: The address of the new list or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned len = 0;

	/*if (head != NULL && str != NULL)*/
	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;

	*head = temp;

	return (temp);
}

/**
 * _strlen - returns the length of string
 * @str: string who is about to be checked
 * Return: length of string
 */

/*int _strlen(char *str)
{
	int j = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str++)
	{
		j++;
	}
	return (j);
}*/
