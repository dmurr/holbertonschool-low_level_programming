#ifndef __DOG_H__
#define __DOG_H__

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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* __DOG_H__ */
