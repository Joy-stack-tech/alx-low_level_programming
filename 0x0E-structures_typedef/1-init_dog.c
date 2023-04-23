#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initializes a variable of struct dog
 * @name: the name of dog
 * @owner: the name of dog owner
 * @age: the age of dog
 * @d: the type struct dog
 *
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
