#include "lists.h"
/**
 * add_node_end - add node to the end of a linked list list_t
 * @head: head of a node
 * @str: name to add
 * Return: ponter to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->str = s;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
/**
 * _strlen - determines lenth of a string
 *
 * @s: characters
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		++len;

	return (len);
}
