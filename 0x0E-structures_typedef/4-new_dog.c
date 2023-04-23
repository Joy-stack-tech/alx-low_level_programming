#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: the age of dog
 * @owner: the name of dog owner
 *
 * Return: the type struct dog or Null on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int j, kname, kowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	for (kname = 0; name[kname]; kname++)
		;
	for (kowner = 0; owner[kowner]; kowner++)
		;

	p_dog->name = malloc(kname + 1);
	p_dog->owner = malloc(kowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (j = 0; j < kname; j++)
		p_dog->name[j] = name[j];
	p_dog->name[j] = '\0';

	p_dog->age = age;
	for (j = 0; j < kowner; j++)
		p_dog->owner[j] = owner[j];
	p_dog->owner[j] = '\0';

	return (p_dog);
}
