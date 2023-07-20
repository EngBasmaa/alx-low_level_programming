#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of range of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr_ascend;
	int i, int_size;

	if (min > max)
		return (NULL);

	int_size = max - min + 1;

	ptr_ascend = malloc(sizeof(int) * int_size);

	if (ptr_ascend == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr_ascend[i] = min++;

	return (ptr_ascend);
}
