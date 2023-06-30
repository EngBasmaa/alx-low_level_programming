#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concat function srtings
 * @dest: destination parameter pointer to a char
 * @src: source parameter pointer to a char
 * @n: number of bytes of str
 * Return: return value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
