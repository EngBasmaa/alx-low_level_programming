#include "main.h"

/**
 * *_memset -  function that fills memory with a constant byte.
 * @s: an input varaible
 * @n: the number of bytes
 * @b: an input varaible
 * Return: (s)  the pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (int index = 0; n > 0; index++, n--)
	{
		s[index] = b;
	}
	return (s);
}
