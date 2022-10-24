#include "lists.h"

/**
 * looped_listint_count - counts the number of unique nodes in a looped list
 * @head: A pointer to the head of the list to check
 * Return: Returns the number of unique nodes in the list or 0 if list is
 * not looped
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *cat, *mouse;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	mouse = (head->next)->next;

	while (mouse)
	{
		if (cat == mouse)
		{
			cat = head;
			while (cat != mouse)
			{
				nodes++;
				cat = cat->next;
				mouse = mouse->next;
			}
			cat = cat->next;
			while (cat != mouse)
			{
				nodes++;
				cat = cat->next;
			}
			return (nodes);
		}
		cat = cat->next;
		mouse = (mouse->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - Frees a list. Can also free lists containing loops
 * @h: A pointer to the address of the head of the list
 * Return: Returns the size of the list free'd
 *
 * Description: This function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
