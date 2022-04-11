#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - Prints struct dog
 *@d: pointer to struct dog
 *
 *return: If name == NULL - (nil)
 *        Otherwise - d == NULL, nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
