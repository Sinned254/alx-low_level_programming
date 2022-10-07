#include "main.h"

/**
 * _realloc - realloc memory block using malloc
 *
 * @ptr:pointer to old memory
 * @old_size: old memory size
 * @new_size: new momory size
 *
 * Return: pointer to new momory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);

	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
