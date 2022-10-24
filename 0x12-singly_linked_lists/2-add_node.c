#include "lists.h"
/**
 * add_node - adds new node at the beggining of a list list-t
 * @head: head node
 * @str: name
 * Return:pointer to the new aelement
 */
list_t *add_node(list_t **head, const *str)
{
	list_t *new;
	char *s;
	int slen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		s = NULL;
		slen = 0;
	}
	else
	{
		s = strdup(str);
		slen = _strlen(str);
	}
	new->len = slen;
	new->str = s;
	new->next = *head;
	*head = new;
	return (*head);
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

