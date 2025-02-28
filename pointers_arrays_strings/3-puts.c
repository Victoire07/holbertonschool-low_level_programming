#include "main.h"
/**
 * _puts - Affiche une chai®ne de carate¨res suivie d'un saut de lig
 * @str: pointeur vers une chai®ne de cartere
 *
 * Return: Rien car void
 */
void _puts(char *str)
{
	int car;

	for (car = 0; str[car] != '\0'; car++)
	{
		_putchar(str[car]);
	}
	_putchar('\n');
}
