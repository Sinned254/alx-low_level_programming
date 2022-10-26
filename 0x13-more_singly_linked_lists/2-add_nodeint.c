#include "lists.h"
/**
 * add_nodeint- add node at the begining of a linke list
 * @head: head node
 * @n: int value
 * Return:adress to the new Node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
