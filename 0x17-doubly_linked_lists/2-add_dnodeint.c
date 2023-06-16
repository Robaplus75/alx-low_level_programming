#include "lists.h"

/**
 * add_dnodeint - add node to the beginnering
 * @head: the head
 * @n: its value
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *headd;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	headd = *head;

	if (headd != NULL)
	{
		while (headd->prev != NULL)
			headd = headd->prev;
	}
	temp->next = headd;

	if (headd != NULL)
		headd->prev = temp;
	*head = temp;

	return (temp);
}
