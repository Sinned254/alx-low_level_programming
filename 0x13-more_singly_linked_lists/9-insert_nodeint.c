#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: head of the pointer
 * @idx: index where we add node
 * @n: node data
 * Return: pointer to the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	tmp = *head;

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	newnode = *head;

	if (idx == 0)
	{
		tmp->next = newnode;
		*head = tmp;
		return (tmp);
	}
	i = 0;
	while (newnode != NULL)
	{
		if (i == idx)
		{
			tmp = tmp->next;
			i++;
			newnode->next = tmp->next;
			tmp->next = newnode;
			tmp->n = n;
			return (tmp);
		}
	}
	free(newnode);
	return (NULL);
}
