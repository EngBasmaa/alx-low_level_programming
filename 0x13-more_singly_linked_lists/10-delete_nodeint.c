#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_ = *head;
	listint_t *crnt = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp_);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp_ || !(tmp_->next))
			return (-1);
		tmp_ = tmp_->next;
		i++;
	}


	crnt = tmp_->next;
	tmp_->next = crnt->next;
	free(crnt);

	return (1);
}
