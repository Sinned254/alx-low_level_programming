#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: head of the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if (*head == NULL)
	{
		free(*head);
		head = NULL;
		return;
	}

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
