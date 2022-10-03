#include "main.h"

/**
 * create_array - creates arrays of chars, initial with a char
 *
 * @size: array size
 * @c: character
 *
 * Return: NULL if size 0, poiter to array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		
		arr = (char *)malloc(sizeof(char) * size);
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		if (arr == 0)
			return (NULL);
	return (arr);
	}
}
