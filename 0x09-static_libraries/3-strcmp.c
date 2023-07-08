#include "main.h"
#include <stdio.h>

/**
 * *_strcmp - compare function srtings
 * @s1: parameter pointer to a char
 * @s2: parameter pointer to a char
 * Return: 0 if s1 is equal s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
