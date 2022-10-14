#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separate strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sa;
	unsigned int i;
	char *strings;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(sa, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(sa, char*);
		if (strings == NULL)
			strings = "(nil)";

		if (separator == NULL)
		{
			if (i == (n - 1))
				printf("%s\n", strings);
			else
				printf("%s", strings);
		}
		else
		{
			if (i == (n - 1))
				printf("%s\n", strings);
			else
				printf("%s%s", strings, separator);
		}
	}
	va_end(sa);
}
