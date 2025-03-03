#include "main.h"
#include <stddef.h>
/**
 * _strchr - Trouve la premiere occurrence d1 cara dans une chaine
 * @s: La chaine de caracteres a parcourir
 * @c: Le caractere a chercher
 *
 * Return: Un pointeur vers la premiere occurrence de `c` dans `s`,
 *         ou NULL si `c` n'est pas present ca retourne ca dcp
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	return (s);
	s++;
	}

	if (*s == c)
	return (s);

	return (NULL);
}
