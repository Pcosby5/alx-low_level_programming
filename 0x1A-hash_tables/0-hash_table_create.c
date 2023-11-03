#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if the function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    /* Declare a pointer to a hash table structure */
    hash_table_t *table;

    /* Declare a pointer to an array of hash nodes */
    hash_node_t **array;

    /* Declare a variable for iterating through the array */
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    table = malloc(sizeof(hash_table_t));

    /* Check if memory allocation failed */
    if (table == NULL)
        return (NULL);

    /* Allocate memory for an array of hash nodes */
    array = malloc(sizeof(hash_node_t *) * size);

    /* Check if memory allocation failed */
    if (array == NULL)
        return (NULL);

    /* Initialize each element in the array to NULL */
    for (i = 0; i < size; i++)
        array[i] = NULL;

    /* Assign the array and size to the hash table structure */
    table->array = array;
    table->size = size;

    /* Return a pointer to the created hash table */
    return (table);
}
