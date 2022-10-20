#include "lists.h"

/**
 * add_node_end - This func adds a new node at the end of a list
 * @head: A pointer to the head of list_t
 * @str: The string to be added
 * Return: Returns address of new element or NULL if otherwise
 */

list_t *add_node_end(list_t *head, const char *str)
{
	char *duplicate;
	int len;
	list_t *first, *end;

	first = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(first);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	first->str = duplicate;
	first->len = len;
	first->next = NULL;

	if (*head == NULL)
		*head = first;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = first;
	}
	return (*head);
}
