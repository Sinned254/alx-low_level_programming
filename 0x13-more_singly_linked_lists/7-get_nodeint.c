#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: head pointer
 * @index: index of the node
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int check = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (check == index)
			return (head);
		head = head->next;
		check++;
	}
	return (NULL);
}



