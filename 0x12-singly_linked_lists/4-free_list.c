#include "lists.h"

/**
 * free_list - This function frees a list_t list
 * @head: A pointer to the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
