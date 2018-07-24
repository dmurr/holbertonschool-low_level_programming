#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @s: string to find length of
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * _strdup - makes copy of string parameter in memory
 * @str: string to copy
 *
 * Return: pointer to copy string
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * _strlen(str) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= _strlen(str); i++)
		s[i] = str[i];

	return (s);
}

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

	char *name_copy = _strdup(name);
	char *owner_copy = _strdup(owner);

	if (!name_copy)
	{
		free(name_copy);
		return NULL;
	}
	if (!owner_copy)
	{
		free(owner_copy);
		return NULL;
	}

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = name_copy;
	ptr->age = age;
	ptr->owner = owner_copy;

	return (ptr);
}
