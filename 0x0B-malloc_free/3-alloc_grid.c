#include "main.h"
/**
 * alloc_grid - returns pointer to two dimesional array of ints
 *
 * @width: array width
 * @height: array height
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if ((height <= 0) && (width <= 0))
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);
	if (p == 0)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == 0)
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (0);
		}
		i++;
	}

	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
		i++;
	}
	return (p);
}


