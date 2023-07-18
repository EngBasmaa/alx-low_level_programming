#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the dog struct
 * @d: the dog struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	 printf("the name: %s\n", d->name);
	 printf("the age: %f\n", d->age);
	 printf("the owner: %s\n", d->owner);
}
