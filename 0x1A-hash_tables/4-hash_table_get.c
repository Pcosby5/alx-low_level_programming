#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key to search for
 *
 * Return: the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	new_current = ht->array[index];

	while (new_current)
	{
		if (strcmp(new_current->key, key) == 0)
			return (new_current->value);
		new_current = new_current->next;
	}

	return (NULL);
}
