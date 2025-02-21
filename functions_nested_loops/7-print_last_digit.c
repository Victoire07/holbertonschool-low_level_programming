#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a nbr
 * @n: last digit of a number to print
 *
 * Description: This function prints the last digit of a number
 *
 * Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
