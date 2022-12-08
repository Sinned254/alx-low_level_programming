#include "lists.h"
/**
 * get_dnodeint_at_index - find element in the double linked list
 *
 * @head: heap pointer
 * @index: node index
 *
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
