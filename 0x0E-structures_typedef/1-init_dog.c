#include "main.h"
#include "dog.h"
/**
 * init_dog - inintialized the struct dog
 * @d: a parameter of structure
 * @name: a name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
	d->name = name;
	d->age  = age;
	d->owner = owner;
	}
}
