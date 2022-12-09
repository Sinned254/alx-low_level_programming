#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
/**
 * delete_dnodeint_at_index - deletes node of doubly linke list at index
 *
 * @head: head pointer
 * @index: indexof the node to delete
 *
 * Return: 1 success, 0 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *temp;
	size_t len;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	len = dlistint_len(*head);
	if (index >= len)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == (len - 1))
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		free(temp);
	}
	while (temp)
	{
		if (i == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

/**
 * dlistint_len - return the number of node in a dlistint_t list
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
