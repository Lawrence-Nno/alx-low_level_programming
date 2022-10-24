#include "lists.h"

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t linked lint
 * @head: A pointer to the head of the list to check
 * Return: Number of unique nodes in the list or 0 if
 * list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *mouse;
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
				mouse = mouse->next
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
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the head of the list to print
 * Return: Returns the number of nodes in the list or 98 if
 * function fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
