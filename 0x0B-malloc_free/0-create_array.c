#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars.
 * and initializes it with a specific char
 * @size: size of array
 * @c: character c to initiate that array
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
