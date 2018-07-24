#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
