#include "main.h"
/**
 * array_range - creates array of intiger
 * @min: start of array
 * @max: end of array
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int n;
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));

	n = (max - min) + 1;
	for (i = 0; i < n; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
