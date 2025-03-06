#include "main.h"
/**
 * _print_rev_recursion - fonction qui imprime une chaine de cara a lenvers
 * @s: chaine a imprimer
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
