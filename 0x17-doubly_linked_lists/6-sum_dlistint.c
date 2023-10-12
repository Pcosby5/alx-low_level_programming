#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_ list
 * @head: Pointer to the head of the doubly-linked list
 *
 * Return: Sum of all the data (n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_total = 0;  /* Initialize a variable to store the sum */

	while (head)
	{
		sum_total += head->n;  /* Add the data (n) of the current node to the sum */
		head = head->next;  /* Move to the next node */
	}

	return (sum_total);  /* Return the calculated sum */
}
