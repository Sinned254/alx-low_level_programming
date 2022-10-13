#include "function_pointers.h"
/**
 * array_iterator - executes funtions given as a parameter
 * @size: size of array
 * @array: array
 * @action: pointer to the fuction
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
	i++;
	}
}
