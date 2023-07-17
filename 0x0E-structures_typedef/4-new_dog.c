#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_new_dog;
	char *clone_name, *clone_owner;

	my_new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (!my_new_dog)
		return (NULL);

	clone_name = (char *) malloc(sizeof(my_new_dog->name) * (strlen(name) + 1));
	clone_owner = (char *) malloc(sizeof(my_new_dog->name) * (strlen(owner) + 1));

	if (!clone_name || !clone_owner)
	{

		free(my_new_dog);
		free(clone_name);
		free(clone_owner);
		return (NULL);
	}

	strcpy(clone_owner, owner);
	strcpy(clone_name, name);

	my_new_dog->name = clone_name;
	my_new_dog->owner = clone_owner;
	my_new_dog->age = age;

	return (my_new_dog);
}
