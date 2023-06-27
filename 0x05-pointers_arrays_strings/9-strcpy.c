#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy the string pointed to src to buffer pointed to dest
 * @dest: array
 * @src: another array
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
