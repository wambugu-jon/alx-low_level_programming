#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Returns a pointer to a new string which is
 *          a duplicate of the string str
 *@str: String to be copied
 *Return: If str == NULL, insufficient memory- NULL
 *        Otherwise, a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
