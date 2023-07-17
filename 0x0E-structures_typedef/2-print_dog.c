#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog structure
 * @d: Pointer to the dog structure
 * Description: This function prints the name, age, and owner of a dog.
 */

void print_dog(struct dog *d)
{

	if (d)
	{
		(d->name) ? printf("Name: %s\n", d->name) : printf("Name (nil)\n");
		printf("Age: %f\n", d->age);
		(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}
