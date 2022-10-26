#include "lists.h"
/**
 * listint_len - returns the number of nodes
 * @h: pointer to the head node of linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
