#include <stdio.h>
/**
 * main - Print the hexadecimal num and let
 *
 * Return: 0
 */
int main(void)
{
	char hex;
	int num;

	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
		putchar('\n');
	return (0);
}
