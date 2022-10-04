#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space
 *
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int n = _strlen(str);
	unsigned int i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (char *) malloc((sizeof(char) * n) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/**
 * _strlen - determines lenth of a string
 *
 * @s: characters
 *
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		++len;

	return (len);
}
