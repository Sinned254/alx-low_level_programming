#include "main.h"
/**
 * _memcpy - copies memory area to destination
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes from area
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
