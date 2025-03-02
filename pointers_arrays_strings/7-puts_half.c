#include "main.h"
/**
 * puts_half - fonction qui imprime la moitie© d'unechaine de caraere + \n
 * @str: Pointeur vers la chaine de caracteres a afficher
 *
 */
void puts_half(char *str)
{
	int length = 0, start;

	while (str[length] != '\0')
	{
	length++;
	}

	start = (length + 1) / 2;

	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}
	_putchar ('\n');
}

