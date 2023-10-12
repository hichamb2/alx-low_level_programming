#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the structur
 * @name: name of dog
 * @age: the age of it
 * @owner: the owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
