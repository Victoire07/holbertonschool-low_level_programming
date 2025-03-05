#include "main.h"

/**
 * _strncpy - Copie deux chaines de caracteres
 * @dest: Buffer de destination
 * @src: La chaine sourcier , copier
 * @n: Le nombre maximal d'octets a copier
 * Return: Un pointeur vers la chaine de destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
