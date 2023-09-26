#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int smm = 0;
	listint_t *tmp_ = head;

	while (tmp_)
	{
		smm += tmp_->n;
		tmp_ = tmp_->next;
	}

	return (smm);
}
