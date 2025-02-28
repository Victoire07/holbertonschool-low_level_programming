#include "main.h"
/**
 * print_rev - Affiche une chai®ne de carace¨res en sens invere
 * @s: La chaine de carace¨res afficher en sens inverse
 *
 * Description: Cette fonction prend une chai®ne de carace¨res et l'affiche
 * caracte¨re par carace¨re en sens ierse. Elle utilise deux boucles
 * `for` pour parcourir la chaine et l'afficher dans l'ordre inverse.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	{
		for (i--; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
