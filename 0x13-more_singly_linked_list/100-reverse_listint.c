#include "lists.h"

/**
 * reverse_listint - This func reverses a listint_t linked list
 * @head: The pointer to the head of the list to reverse
 * Return: Returns a pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}
	(*head)->next = back;
	return (*head);
}
