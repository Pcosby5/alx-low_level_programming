#include "hash_tables.h"

/**
 * key_index - This function returns the index of a key.
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	/* Calculate the hash value using the hash_djb2 function */
	hash_val = hash_djb2(key);

	/* Calculate the index based on the hash value and the size of the array */
	return (hash_val % size);
}
