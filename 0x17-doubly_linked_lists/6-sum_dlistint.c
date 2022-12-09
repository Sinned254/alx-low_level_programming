#include "lists.h"
/**
 * sum_dlistint - sums data of dubly linked list
 *
 * @head: head pointer
 *
 * Return: some of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
