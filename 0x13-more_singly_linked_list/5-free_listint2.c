#include "lists.h"

/**
 * free_listint2 - This func frees a list
 * @head: A pointer to the head of the list to free
 * Return: Returns void
 * Description: You free the list by setting the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
