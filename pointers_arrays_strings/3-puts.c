#include "main.h"
#include <stdio.h>
/**
 * _puts - Affiche une chai®ne de carate¨res suivie d'un saut de lig
 * @str: pointeur vers une chai®ne de cartere
 *
 * Return: Rien car void
 */
void _puts(char *str)
{
	int car = 0;

	while (str[car] != '\0') /* Tant que la fin dla chaine est pas atteinte */
	{
		putchar(str[car]); /* Putchar donc affiche le carctere courant */
		car++;
	}

	putchar('\n');
}
