#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - Concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concated string
*/

char *str_concat(char *s1, char *s2)
{
	char *str_ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int limit = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str_ptr = malloc(sizeof(char) * (i + j + 1));
	if (str_ptr == NULL)
	{
		free(str_ptr);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	for (k = 0; k < i; k++)
		str_ptr[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; j++, k++)
		str_ptr[k] = s2[j];

	return (str_ptr);
}
