#ifndef DOG_H
#define DOG_H


/**
 * struct dog - define a dog structure
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 * Description: Long description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str_);
char _strcpy(char *s, char *s1);

#endi$ vi dog.hf
