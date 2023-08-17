#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 *
 * @head: head pointer
 *
 * return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
