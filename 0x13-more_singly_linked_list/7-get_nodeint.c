#include "lists.h"

/**
 * get_nodeint_at_index - This func returns the nth node of a list
 * @head: A pointer to the head of the list
 * @index: Index of the node to locate, starts from 0
 * Return: Returns the located node or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
