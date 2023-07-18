#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: pointer to struct of dog
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);

		printf("age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
