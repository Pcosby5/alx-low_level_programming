#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicates a string
  * @str: the string to be duplicated
  * Return: the duplicated string
  */

char *_strdup(char *str)
{
	int p = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (p < i)
	{
		s[p] = str[p];
		p++;
	}
	s[p] = '\0';
	return (s);
}
