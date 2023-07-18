#ifndef DOG_H
#define DOG_H

/**
 * main - define a dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: returns (0) success
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
