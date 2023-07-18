#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct representing a dogo
 * @age: age of dogo
 * @owner: owner of dogo
 * @name: name of dogo
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
