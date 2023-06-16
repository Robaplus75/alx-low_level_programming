#include "lists.h"

/**
 * dlistint_len - used to count the number of nodes
 * @h: the head of the linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
