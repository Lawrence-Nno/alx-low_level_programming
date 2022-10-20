#include "lists.h"

/**
 * add_node - This func adds a new node at the start of a list
 * @head: A pointer to the head of the list
 * @str: The string to be added to the list
 * Return: Returns the address of the new node otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
