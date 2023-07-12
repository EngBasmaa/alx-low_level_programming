#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space at memory.
 * @str: string value.
 * Return: pointer of array of chars, (NULL) if insufficient
 */

char *_strdup(char *str)
{
	char *str_ptr;
	unsigned int i = 0;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	str_ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (str_ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		str_ptr[i] = str[i];

	return (str_ptr);
}
