#include "lists.h"

/**
 * free_listint - This func frees a list
 * @head: A pointer to the head of the list to free
 * Return: Returns void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
