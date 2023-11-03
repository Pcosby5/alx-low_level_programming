#include "hash_tables.h"

/**
 * hash_table_print - prints the content of a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;  /* Temporarily stores the current node */
	unsigned long int i = 0, a = 0;  /* Loop counters for hash array and node list */
	char *sep_btn = ", ";  /* Separator between key-value pairs */
	char *sep_bef = "";  /* Separator before the first key-value pair */

	if (ht == NULL)
		return;  /* If the hash table is NULL, do nothing */

	if (ht != NULL)
	{
		printf("{");  /* Print the opening curly brace */
		for (; i < ht->size; i++)
		{
			tmp = ht->array[i];  /* Get the current node in the array */
			for (; tmp != NULL; a++)
			{
				printf("%s", sep_bef);  /* Print the separator */
				printf("'%s': '%s'", tmp->key, tmp->value);  /* Print the key-value pair */
				sep_bef = sep_btn;  /* Set the separator to ',' for subsequent pairs */
				tmp = tmp->next;  /* Move to the next node in the list */
			}
		}
		printf("}\n");  /* Print the closing curly brace and a newline character */
	}
}
