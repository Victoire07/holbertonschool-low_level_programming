#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Description: It is possible to use '_putchar' only two times in the code
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
