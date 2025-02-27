#include "main.h"
/**
 * print_triangle - Write a fnctin that prints a triangle followed by a new lne
 * @size: The size of the triangle
 *
 * Description: If size is 0 or less, the function should print only a new line
 */

void print_triangle(int size)
{
	int l, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0; l < size; l++)
	{
	for (c = 0; c < size - l - 1; c++)
	{
	_putchar(' ');
	}
	for (c = 0; c <= l; c++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
