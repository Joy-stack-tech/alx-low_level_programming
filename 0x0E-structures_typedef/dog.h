#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - struct function that stores information about
 * a particular dog
 * @name: name of dog
 * @age: stated age of dog
 * @owner: name of the dog owner
 *
 * Return: description for the struct named dog, thet stores
 * the name, its owner name and its age
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
