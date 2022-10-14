#include "variadic_functions.h"
/**
 * print_numbers - print numbers passed to it with a separator
 * @separator: string to separate printed numbers
 * @n: number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int nums;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(ap, int);
		if (separator == NULL)
		{
			if (i == (n - 1))
				printf("%d\n", nums);
			else
				printf("%d", nums);
		}
		else
		{
			if (i == (n - 1))
				printf("%d\n", nums);
			else
				printf("%d%s", nums, separator);
		}
	}
	va_end(ap);
}

