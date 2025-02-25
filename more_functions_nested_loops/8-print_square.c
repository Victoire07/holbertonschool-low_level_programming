#include "main.h"
/**
 *print_square - Write a function that prints a square, followed by a new lne
 * @size: The size of the square
 *
 * Description : If size is 0 or less, the function should print only a new lne
 */

void print_square(int size)
{
	int l, c;

	if (size <= 0)
	{	
		_putchar('\n');
		return;
	}

	for (l = 0; l < size; l++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
