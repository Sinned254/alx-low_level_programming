#include "main.h"
/**
 * _pow_recursion - finds the value of powered number
 *
 * @x: value
 * @y: power
 *
 * Return: results
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		res = x * _pow_recursion(x, y - 1);
		return (res);
	}
}

