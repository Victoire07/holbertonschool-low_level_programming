#include <stdio.h>
/**
 * main - Prints numbers
 *
 * Return: 0
 */
int main(void)
{
	char nmb;

	for (nmb = '0'; nmb <= '9'; nmb++)
	{
		putchar(nmb);
	}
	putchar ('\n');
	return (0);
}
