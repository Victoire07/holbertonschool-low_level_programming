#include <stdio.h>
/**
 * main - Print the alphabet mirror
 *
 * Return: 0
 */
int main(void)
{
	char mir;

	for (mir = 'z'; mir >= 'a'; mir--)
	{
		putchar(mir);
	}
	putchar('\n');
	return (0);
}
