#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: head of list
 * @index: index of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	return (head);
}
