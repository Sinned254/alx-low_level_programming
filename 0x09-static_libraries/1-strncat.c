#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: string 2 length
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lend, j;

	lend = 0;

	for  (j = 0; *(dest + j) != '\0'; j++)
		++lend;

	for (j = 0; *(src + j) != '\0' && j < n; j++)
	{
		dest[lend + j] = src[j];
	}
	dest[lend + j] = '\0';
	return (dest);
}

