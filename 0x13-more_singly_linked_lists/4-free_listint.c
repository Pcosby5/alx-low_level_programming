#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to be freed
 */

void free_listint(listint_t *head)
{

	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
