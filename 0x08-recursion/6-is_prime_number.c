#include "main.h"
/**
 * checkprime - check num if prime
 *
 * @num: number
 * @i: checker
 *
 * return: 1 0r 0
 */
int checkprime(int i, int num)
{
	if (i == num)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	 else
	{
		return checkprime(i + 1, num);
	}
}
/**
 * is_prime_number - check if n is prime number
 *
 * @n: number to check
 *
 * Return: 1 if it is a prime 0 otherwise
 */
int is_prime_number(int n)
{
	int strt = 2;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return(checkprime(strt, n));
	}
}
