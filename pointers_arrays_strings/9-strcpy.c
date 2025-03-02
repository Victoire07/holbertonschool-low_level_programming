#include "main.h"
/**
 * _strcpy - Copie la chaine de src vers dest
 * @dest: Pointeur vers le buffer de destination
 * @src: Pointeur vers la chaine source
 *
 * Return: Le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
