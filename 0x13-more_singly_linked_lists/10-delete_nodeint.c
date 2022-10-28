#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at specif index
 * @head: head pointer
 * @index: index of node that shoul be deleted
 * Return: 1 if succeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nextn, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	nextn = temp->next;
	temp->next = nextn->next;
	free(nextn);
	return (1);

}



