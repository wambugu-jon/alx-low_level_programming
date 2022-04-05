#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars and
 *               initializes with special char.
 *@size: Size of the array to be initialized.
 *@c: The spcific char to initialize the array with.
 *
 *Return: If size == 0 or the function fails -NULL.
 *        Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
