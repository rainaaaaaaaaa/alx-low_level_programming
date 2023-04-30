#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure representing information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
