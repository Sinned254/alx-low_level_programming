#include <main.h>
/**
 *  print_line - print line using _ n times
 *  @n: number of times to print _
 *
 *  retur: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}

