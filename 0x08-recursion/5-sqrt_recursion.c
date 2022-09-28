#include "main.h"
/**
 * sqrt_ - find square
 *
 * @sq: num squared
 * @num: number to check
 * Return: square
 */
int sqrt_(int sq, int num)
{
	if (num * num == sq)
		return (num);
	else if (num > sq / num)
		return (sqrt_(sq, num - 1));
	else if (num < sq / num)
		return (sqrt_(sq, num + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - find natural squaroot of a number
 *
 * @n: number
 *
 * Return: squareroot of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int lo = 1;

	if (n > 1)
		return (sqrt_(n, lo));
	else if (n == 1)
		return (1);
	else
		return (-1);
}
