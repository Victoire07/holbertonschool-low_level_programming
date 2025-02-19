#include <stdio.h>
/**
 * main - Print the alph less two ltrs
 *
 * Return: 0
 */
int main(void)
{
	char sns;

	for (sns = 'a'; sns <= 'z'; sns++)
	if (sns != 'e' && sns != 'q')
	{
		putchar(sns);
	
	}
	putchar('\n');
	return (0);
}
