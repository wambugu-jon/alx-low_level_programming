#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initialize a variable of type structure
 *@d: a pointer to the struct dog
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: The owner of the dog
 *
 *Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
