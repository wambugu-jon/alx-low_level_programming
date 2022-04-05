#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatenates two strings.
 *@s1: The string to be concatenated upon.
 *@s2: The string to be concatenated to s1.
 *
 *Return: If concatenation fails - NULL.
 *        Otherwise - a pointer the newly-allocated space
 *                    in memory containing the concatenated strings.
 *Description: return pointer should point to a newly allocated space
 *             in memory which contains the contents of s1, followed by
 *             the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *con_cat;
	int i, cat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	con_cat = malloc(sizeof(char) * len);

	if (con_cat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con_cat[cat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		con_cat[cat_i++] = s2[i];

	return (con_cat);
}
