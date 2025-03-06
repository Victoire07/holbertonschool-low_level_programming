#include "main.h"
#include "0-puts_recursion.c"
/**
 * _print_rev_recursion - fonction qui imprime une chaine de cara a lenvers
 * @s: chaine a imprimer
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s - 1);
}
