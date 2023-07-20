#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * (NULL) if nmemb or size is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_alloc = (char *)malloc(nmemb * size);

	if (ptr_alloc == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr_alloc[i] = 0;

	return (ptr_alloc);
}
