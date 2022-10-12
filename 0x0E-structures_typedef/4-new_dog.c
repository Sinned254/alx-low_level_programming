#include "dog.h"
#include <stdlib.h>
unsigned int _strlen(char *s);
char *_strdup(char *str);
/**
 * new_dog - creates new dog
 * @name: Dog's name
 * @age: Age of the Dog
 * @owner: The name of the Dog Owner
 *
 * Return: pointer dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mbwa;
	char *m_name, *m_owner;

	mbwa = malloc(sizeof(dog_t));
	if (mbwa == NULL)
		return (NULL);
	m_name = _strdup(name);
	if (m_name == NULL)
	{
		free(mbwa);
		return (NULL);
	}
	m_owner = _strdup(owner);
	if (m_owner == NULL)
	{
		free(m_name);
		free(mbwa);
		return (NULL);
	}
	mbwa->name = m_name;
	mbwa->age = age;
	mbwa->owner = m_owner;
	return (mbwa);
}

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
