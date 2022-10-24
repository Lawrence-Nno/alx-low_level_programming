#include "lists.h"

/**
 * find_listint_loop - This Func finds the loop in a linked list
 * @head: A pointer to the head of the list
 * Return: Returns the address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *mouse;

	if (head == NULL || head->next == NULL)
		return (NULL);

	cat = head->next;
	mouse = (head->next)->next;

	while (mouse)
	{
		if (cat == mouse)
		{
			cat = head;

			while (cat != mouse)
			{
				cat = cat->next;
				mouse = mouse->next;
			}
			return (cat);
		}
		cat = cat->next;
		mouse = (mouse->next)->next;
	}
	return (NULL);
}
