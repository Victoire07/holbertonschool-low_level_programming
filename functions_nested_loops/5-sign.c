#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater thn zero, 0 if n is zero, -1 if n is less thn zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
