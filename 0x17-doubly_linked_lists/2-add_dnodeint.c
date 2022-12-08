#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning to doubly linked list
 *
 * @head: pointer to head
 * @n: element to add
 *
 * Return: address to to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (*head);
}
