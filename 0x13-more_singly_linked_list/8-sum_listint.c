#include "lists.h"

/**
 * sum_listint - This func returns the sum of all data of a list
 * @head: A pointer to the head of the list
 * Return: 0 if the list is empty otherwise the sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
