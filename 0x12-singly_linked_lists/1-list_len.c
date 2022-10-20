#include "lists.h"

/**
 * list_len - This function returns the number of elemensts in a linked list
 * @h: The linked list, list_t.
 * Return: Number of elements in linked list.
 */

size_t list_len (const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
