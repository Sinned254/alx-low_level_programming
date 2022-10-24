#include "lists.h"
/**
 * print_list - prints elements of a list_t list
 * @h: head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	i = 0;

	while (h != NULL)
	{
		i++;
		printf("[%d} %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
