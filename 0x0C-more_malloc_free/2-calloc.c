#include "main.h"
/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: array elements
 * @size: size bytes of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	a = arr;
	while (i < (nmemb * size))
	{
		a[i] = 0;
		i++;
	}
	return (arr);
}




