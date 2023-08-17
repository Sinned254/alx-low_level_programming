#include "lists.h"
/**
 * dlistint_len - finds the lent of ad ouble linked list
 *
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
