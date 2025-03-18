#include "function_pointers.h"

/**
 * print_name - Fonction qui imprime un nom
 * @name: le nom a imprimer
 * @f: la fonction qui imprime le nom
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
