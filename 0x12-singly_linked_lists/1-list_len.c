#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list
 * @h: pointer of begining node
 * Return: list length
*/

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
