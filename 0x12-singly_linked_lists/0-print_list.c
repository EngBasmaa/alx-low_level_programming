#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - print elements of list_t list
 * @h: a pointer to list
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t lst_size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		lst_size++;
	}
	return (lst_size);
}
