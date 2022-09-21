#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lend, j;

	lend = 0;

	for  (j = 0; *(dest + j) != '\0'; j++)
		++lend;

	for (j = 0; *(src + j) != '\0'; j++)
	{
		dest[lend + j] = src[j];
	}
	dest[lend + j] = '\0';
	return (dest);
}

