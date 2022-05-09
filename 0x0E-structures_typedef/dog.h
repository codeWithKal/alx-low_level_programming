#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structre for a dog
 * @name: a pointer to a name of my dog
 * @age: an age of my dog
 * @owner: a pointer to the owner of the dog
 *
 * Description: a struct to define an dog datatype
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
