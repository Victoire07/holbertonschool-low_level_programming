#include "main.h"
/**
 *times_table - Print the 9 tables of multiplication
 *
 * Description: This fctn prints the 9 first tables
 */
void times_table(void)
{
	int num1, num2;
	int mult;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			mult = num1 * num2;
			if (num2 == 0)
			{
				_putchar(48);
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (mult < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((mult / 10) + 48);
				}
				_putchar((mult % 10) + 48);
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
