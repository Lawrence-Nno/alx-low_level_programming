#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: The head of the list
 * Return: Returns an unsigned int
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;


        if (h == NULL)
                return (0);

        while (h->next != NULL)
        {
		count++;
                printf("%d\n", h->n);
                h = h->next;
        }

        printf("%d\n", h->n);

        return (count + 1);
}
