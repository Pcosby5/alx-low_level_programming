#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: linked list type listint_t
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (!head)
		return (add);

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
