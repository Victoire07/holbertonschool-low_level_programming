#include "main.h"

/**
 * _memset - Remplit une zone memoire avec un octet constant
 * @s: Pointeur vers la zone memoire a remplir
 * @b: L'octet a utiliser pour remplir la memoire
 * @n: Nombre d'octets a remplir
 *
 * Return: Un pointeur vers la zone memoire `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
}
