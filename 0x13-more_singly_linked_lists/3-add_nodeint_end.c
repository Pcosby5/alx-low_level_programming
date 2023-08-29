#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a newnode to the end of a list
 * @head: head of list
 * @n: value for newnode
 * Return: address of new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = *head;

	if (temp != NULL)

		while (temp->next != NULL)
			temp = temp->next;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (!*head)
	{
		*head = newnode;
		newnode->next = NULL;
	}

	else
	{
		temp->next = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
