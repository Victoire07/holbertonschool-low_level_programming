#include "main.h"
/**
 * puts2 - Affiche 1 caract sur 2 d'une chaine, en commencant par le 1er + \n
 * @str: Pointeur vers la chaine de caracteres a afficher
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
}
