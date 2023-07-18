#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: pointer to struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of the dog
 * Return: void
*/

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("the name: (nil)\n");
		else 
			printf("the name: %s\n", d->name);

		if (d->owner == NULL)
			printf("the owner: (nil)\n");
		else 
			printf("the owner: %s\n", d->owner);

		printf("the age: %f\n", d->age);
	}
}
