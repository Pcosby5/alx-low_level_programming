#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	next = (*head)->next;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

