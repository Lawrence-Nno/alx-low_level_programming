#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a list
 * @head: The head of the list
 * @n: The data of the node to add
 * Return: Returns the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *ptr;
        dlistint_t *end = malloc(sizeof(dlistint_t));

        if (end == NULL)
                return (NULL);

        end->n = n;
        end->next = NULL;

        if (*head == NULL)
        {
                end->prev = NULL;
                *head = end;
                return (end);
        }
        ptr = *head;

        while (ptr && ptr->next != NULL)
	{
                ptr = ptr->next;
        }
        ptr->next = end;
        end->prev = ptr;
        return (end);
}
