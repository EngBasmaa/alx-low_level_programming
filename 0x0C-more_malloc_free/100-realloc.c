#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space of ptr
 * @new_size: new size of the new memory block
 * Return: (pointer) without changes if the two sizes equal
 * or (NULL) if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
