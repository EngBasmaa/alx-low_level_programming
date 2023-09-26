#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnod;
	listint_t *tmp_ = *head;

	newnod = malloc(sizeof(listint_t));
	if (!newnod || !head)
		return (NULL);

	newnod->n = n;
	newnod->next = NULL;

	if (idx == 0)
	{
		newnod->next = *head;
		*head = newnod;
		return (newnod);
	}

	for (i = 0; tmp_ && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnod->next = tmp_->next;
			tmp_->next = newnod;
			return (newnod);
		}
		else
			tmp_ = tmp_->next;
	}

	return (NULL);
}
