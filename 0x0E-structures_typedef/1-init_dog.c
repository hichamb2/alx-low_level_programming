#include "dog.h"
/**
 * init_dog - Function that bla bla
 * @d: 1st par bamla
 * @name: bla bla 
 * @age: bla la
 * @owner: 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
