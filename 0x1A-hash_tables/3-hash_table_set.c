#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add/update the element in
 * @key: The key to add/update
 * @value: The value to associate with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL, *aux_key = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	aux_key = ht->array[idx];

	while (aux_key != NULL)
	{
		if (strcmp(key, aux_key->key) == 0)
		{
			free(aux_key->value);
			aux_key->value = strdup(value);
			return (1);
		}
		aux_key = aux_key->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;
	if (ht->array[idx] != NULL)
		new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
