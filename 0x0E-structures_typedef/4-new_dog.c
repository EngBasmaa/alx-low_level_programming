#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str_: string to be stored
 * Return: length of string
*/

int _strlen(char *str_)
{
	int l = 0;
	while (str_[i] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * _strcpy - copy a string from the source string
 * @p_des: pointer to the buffer in which we will copy the string
 * @p_src: string to copy
 * Return: value
*/

char _strcpy(char *p_des, char *p_src)
{
	int i;
	for (i = 0; p_src[i]; i++)
		p_des[i] = p_src[i];
	p_des[i] = '\0';
	return (*p_des);
}

/**
 * init_dog - initialize a variable of type struct
 * @d: pointer to struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of the dog
 * Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int length_1, length_2;

	length_1 = _strlen(name);
	length_2 = _strlen(owner);

	dog =(dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);

	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
