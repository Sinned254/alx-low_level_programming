#include "main.h"
/**
 * _strcpy - copy string including null byte
 * @dest: destination poniter
 * @src: source pointer
 * Return: ponter to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}

	if (*(src + i) == '\0')
	dest[i] = '\0';

	return (dest);
}

