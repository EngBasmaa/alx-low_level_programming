#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes to copy
 * Return: copied memory with n bytes changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
