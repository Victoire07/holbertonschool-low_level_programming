#include "main.h"
/**
 *print_line - prints a straight line in the terminal (draws)
 *
 * @n: numbers
 *
 * If n is 0 or less the function only prints a newline
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
