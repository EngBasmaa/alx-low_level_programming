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
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
