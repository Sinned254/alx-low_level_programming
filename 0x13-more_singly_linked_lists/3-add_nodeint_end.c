#include "lists.h"
/**
 * add_node_end - add node at the end of the list
 * @head: head node
 * @n: int value
 * Return: pointer to the newly created int
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlast, *temp;

	newlast = malloc(sizeof(listint_t));

	if (newlast == NULL)
		return (NULL);
	newlast->n = n;
	newlast->next = NULL;
	if (*head == NULL)
	{
		*head = newlast;
		return (newlast);
	}

	temp = *head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newlast;
	return (newlast);
}
