#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end to doubly linked list
 *
 * @head: pointer to head
 * @n: element to add
 *
 * Return: address to to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
