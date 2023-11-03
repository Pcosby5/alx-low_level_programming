#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* initialize the hash variable */
	unsigned long int hash;
	int c;

	/* set the initial hash value */
	hash = 5381;
	/* Iterate through each char of string*/
	while ((c = *str++))
	{
		/* Update the hash value using the djb2 algorithm*/
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
