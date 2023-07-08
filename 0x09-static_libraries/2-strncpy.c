#include "main.h"
#include <stdio.h>

/**
 * _strncpy - commute function srtings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 * @n:number of bytes to copy
 * Return:  pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
