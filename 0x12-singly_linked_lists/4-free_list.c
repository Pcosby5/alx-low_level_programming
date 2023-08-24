#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
