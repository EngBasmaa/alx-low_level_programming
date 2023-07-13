#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to the allocated memory, (98) is failed
 */
void *malloc_checked(unsigned int b)
{
    char *pointer;

    pointer = (char*)malloc(b);
    if (pointer == NULL)
        exit(98);
    return (pointer);
}
