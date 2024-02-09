#include "dog.h"
/**
 *
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t *));
	if (!ptr)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
