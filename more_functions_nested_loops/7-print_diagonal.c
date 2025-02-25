#include "main.h"
/**
 *print_diagonal - Write a function that draws a diagonal line on the terminal
 *
 * @n: numbers
 *
 * Description : If n is 0 or less the function should only print a '\n'
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
