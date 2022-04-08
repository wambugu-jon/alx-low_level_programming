#include "main.h"
#include <stdlib.h>

/**
 *array_range - Create an array of integers
 *@min: Minimum number of arrays included
 *@max: Maximum number of arrays excluded
 *
 *Return: If min > max, malloc fails -NULL
 *        Otherwise - The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
