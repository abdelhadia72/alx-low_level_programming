#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);

		free(d);
	}
}
