#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_ = NULL;
	const listint_t *ln_ = NULL;
	size_t contr = 0;
	size_t newnod;

	tmp_ = head;
	while (tmp_)
	{
		printf("[%p] %d\n", (void *)tmp_, tmp_->n);
		contr++;
		tmp_ = tmp_->next;
		ln_ = head;
		newnod = 0;
		while (newnod < contr)
		{
			if (tmp_ == ln_)
			{
				printf("-> [%p] %d\n", (void *)tmp_, tmp_->n);
				return (contr);
			}
			ln_ = ln_->next;
			newnod++;
		}
		if (!head)
			exit(98);
	}
	return (contr);
}
