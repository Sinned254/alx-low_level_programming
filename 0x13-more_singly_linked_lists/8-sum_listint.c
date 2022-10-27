#include "lists.h"
/**
 * sum_listint - sum data n of linked list
 * @head: poiter to the head node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
