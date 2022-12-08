#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: A pointer to the head of the list
 * @n: The data to be added
 * Return: Returns the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new = malloc(sizeof(dlistint_t));

        if (new == NULL)
                return (NULL);

        new->n = n;
        new->next = *head;
        new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
        *head = new;

        return (*head);
}
