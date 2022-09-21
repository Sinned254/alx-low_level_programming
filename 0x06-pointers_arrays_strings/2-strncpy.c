#include "main.h"
/**
 * _strncpy - copies a string up to n to a destinatination
 * @dest:destination
 * @src: source
 * @n: source length to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; *(src + j) != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
	dest[j] = '\0';
	}
	return (dest);
}

