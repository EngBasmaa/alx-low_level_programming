#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct
 * @d: pointer to struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of the dog
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && d != 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	else
	{
		d = (struct dog *)malloc(sizeof(struct dog));
	}
}
