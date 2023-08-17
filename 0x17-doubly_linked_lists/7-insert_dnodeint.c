#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
/**
 * insert_dnodeint_at_index - insert new node at give position
 * of a doubly linked lsit
 * @h: head pointer
 * @idx: index to insert
 * @n: element of the new node
 *
 * Return: adrress to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	size_t len;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
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
