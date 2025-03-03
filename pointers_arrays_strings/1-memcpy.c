#include "main.h"

/**
 * _memcpy - Copie une zone de memoire
 * @dest: Pointeur vers la zone memoire de destination
 * @src: Pointeur vers la zone memoire source
 * @n: Nombre d'octets a copier
 *
 * Return: Un pointeur vers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
