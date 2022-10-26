#include "lists.h"
/**
 * free_listint - free linked list
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
		head = temp;
	}
}
