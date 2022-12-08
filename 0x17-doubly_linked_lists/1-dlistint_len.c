#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: A pointer to the head of the list
 * Return: Returns an unsigned int
 */

 size_t dlistint_len(const dlistint_t *h)
 {
        size_t count = 0;

        if (h == NULL)
                return count;

        while (h->next != NULL)
        {
                count++;
                h = h->next;
        }
        return (count + 1);
 }
