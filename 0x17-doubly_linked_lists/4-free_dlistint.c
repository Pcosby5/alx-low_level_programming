#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the doubly-linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;  /* Declare a temporary node variable */

	while (head)
	{
		temp = head;  /* Assign the head node to temp */
		head = head->next;  /* Move to the next node */
		free(temp);  /* Free the temp node */
	}
}
