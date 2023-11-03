#include "hash_tables.h"
/**
 * hash_table_set - Creates the nodes for the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 * Return: 1 if successful, 0 if not.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL, *aux_key = NULL;
	/* Check for invalid inputs and empty keys */
	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	/* Calculate the index using the hash function */
	idx = key_index((const unsigned char *) key, ht->size);
	aux_key = ht->array[idx];
	/* Search for an existing key and update its value */
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
	/* Create a new node for the key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* Duplicate the key */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	/* Duplicate the value */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* Initialize the next pointer to NULL */
	new_node->next = NULL;
	/* Handle collisions by chaining the new node */
	if (ht->array[idx] != NULL)
		new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
