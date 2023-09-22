#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new_node;
	list_t hello = {"World", 5, NULL};
	size_t num;

	head = &hello;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new_node->str = strdup("Hello");
	new_node->len = 5;
	new_node->next = head;
	head = new_node;
	num = print_list(head);
	printf("-> %lu elements\n", num);
	printf("\n");
	free(new_node->str);
	new_node->str = NULL;
	num = print_list(head);
	printf("-> %lu elements\n", num);
	free(new_node);
	return (0);
}
