#include "main.h"
/**
 * _strlen_recursion - Retourne la longueur d'une chaine de caracteres
 * @s: chaine de caractere a mesurer
 *
 * Return: Longueur de la string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
