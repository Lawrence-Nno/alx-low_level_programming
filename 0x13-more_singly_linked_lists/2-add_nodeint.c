#include "lists.h"

/**
 * add_nodeint - This func adds a new node to the beginning of a list
 * @head: A pointer to the head of the list
 * @n: An integer
 * Return: Returns the address of the new element
 * or NULL if the function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
