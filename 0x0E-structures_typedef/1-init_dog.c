#include "dog.h"

/**
 * main - initialize a variable of type struct
 * @d: pointer of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of the dog
 * Return: returns (0) success
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = ((struct dog) *)malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;

}
