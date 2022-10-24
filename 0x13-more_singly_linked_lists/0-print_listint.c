#include "lists.h"

/**
 * print_listint - This func prints all elements of a listint_t list
 * @h: A pointer to the head of listint_t list
 * Return: Returns the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
