#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initializes variable
 *
 * @name: name
 * @age: age
 * @owner: owner of dog
 * @d: pointer to function
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
