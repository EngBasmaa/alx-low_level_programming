#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print elements of list_t list
 * @h: a pointer to list
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t lst_size = 0;
	char *c;

	while (h)
	{
		if (c != NULL)
			while (*c++)
				lst_size++;
		else
			return (0);
		return (lst_size);
		if (h->str == NULL)
		{
			lst_size = 0;
			printf("[%ld] (nil)", lst_size);
		}
		else
		{
			printf("[%ld] (%s)\n", lst_size, h->str);
			h = h->next;
			++lst_size;
		}
	}
	return (lst_size);
}
