#include "main.h"
/**
 *get_endianness - checks endianess
 *Return:0- big endian, 1- small endian
 */


int get_endianness(void)
{
	int p = 1;
	char *end = (char *)&p;

	if (*end)
		return (1);
	return (0);
}
