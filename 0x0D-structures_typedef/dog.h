#ifndef __dog_h__
#define __dog_h__

/**
 * struct dog - new dog type
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* __dog_h__ */
