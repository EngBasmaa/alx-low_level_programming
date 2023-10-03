#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenn = 0;
	int dif;
	listint_t *tmp_;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp_ = (*h)->next;
			free(*h);
			*h = tmp_;
			lenn++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenn++;
			break;
		}
	}

	*h = NULL;

	return (lenn);
}