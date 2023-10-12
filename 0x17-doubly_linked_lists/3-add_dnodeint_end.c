#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to a pointer to the head of the doubly-linked list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Declare a new node variable */
	dlistint_t *temp;     /* Declare a temporary node variable */
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* Check if malloc fails */
		return (NULL);
	new_node->n = n;       /* Set the value of the new node to n */
	new_node->next = NULL; /* Set the next pointer of the new node to NULL */
	if (*head == NULL) /* Check if the list is empty */
	{
		new_node->prev = NULL; /* Set the previous pointer to NULL */
		*head = new_node;      /* Update the head to point to the new node */
	}
	else
	{
		temp = *head; /* Initialize temp with the head node */
		/* Traverse to the end of the list */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node; /* Set the next pointer of the last node to newnode */
		new_node->prev = temp; /* Set the previous pointer of new node to lastnode */
	}

	return (new_node); /* Return the address of the new element */
}
