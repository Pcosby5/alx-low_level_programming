#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node  of a linked list
 * @head: pointer
 * Return: head node's data(n)/ value
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *newnode = NULL;

	if (*head == NULL)
		return (0);

	newnode = (*head)->next;
	data = (*head)->n;

	free(*head);
	(*head) = newnode;

	return (data);
}

