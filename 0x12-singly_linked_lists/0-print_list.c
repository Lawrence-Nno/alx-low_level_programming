#include "lists.h"

/**
 * print_list - This function prints all the elements of a list
 * @h: The list
 * Return: Returns number of nodes in list h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
