#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 *
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table; /* Declare a pointer to a hash table */
	hash_node_t **array; /* Declare a pointer to an array of hash nodes */
	unsigned long int i; /* Declare an unsigned long integer variable */

	table = malloc(sizeof(hash_table_t)); /* Allocate memory for the hash table */
	if (table == NULL)					  /* Check if allocation was successful */
		return (NULL);					  /* Return NULL if allocation failed */

	array = malloc(sizeof(hash_node_t *) * size); /* Allocate memory for the array of hash nodes */
	if (array == NULL)							  /* Check if allocation was successful */
		return (NULL);							  /* Return NULL if allocation failed */

	for (i = 0; i < size; i++) /* Iterate through the array of hash nodes */
		array[i] = NULL;	   /* Initialize each element to NULL */

	table->array = array; /* Assign the array to the hash table */
	table->size = size;	  /* Assign the size to the hash table */

	return (table); /* Return the created hash table */
}
