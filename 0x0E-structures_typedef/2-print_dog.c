#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints info of type struct dog
 * @d: the type struct dog
 *
 * Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);

		printf("Age: %f\n", d->age);

		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
	}
}