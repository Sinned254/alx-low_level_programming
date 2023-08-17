#include "lists.h"
/**
 * print_dlistint - Print the elements of doubly linked list
 *
 * @h: pointer to head
 *
 * Return: number of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
