#include "function_pointers.h"

/**
 * int_index - serches for and integer
 * @array: array of intergers
 * @size: size of elemnts in array
 * @cmp: pointer to a funtion
 * Return: index of fisrst element for which funtion does not retun 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i, check;

	if (size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}
	return (-1);
}
