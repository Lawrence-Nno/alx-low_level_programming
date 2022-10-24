#include "lists.h"

/**
 * pop_listint - This func deletes the head node of a listint_t list
 * @head: A pointer to the head node
 * Return: Returns the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rt;

	if (*head == NULL)
		return (0);

	temp = *head;
	rt = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (rt);
}
