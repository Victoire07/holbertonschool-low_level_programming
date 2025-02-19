#include <stdio.h>
/**
 * main - Prints alpha less two lettrs
 *
 * Return: 0
 */
int main(void)
{
	char sns;

	for (sns = 'a'; sns <= 'z'; sns++)
	if (sns != 'q' && sns != 'e')
	{
		putchar(sns);
	}
	putchar ('\n');
	return (0);
}
