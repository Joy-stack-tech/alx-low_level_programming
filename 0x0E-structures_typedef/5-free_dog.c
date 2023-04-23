#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: a type struct dog
 *
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
