#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Recherche le premier caractère de s qui appartient à accept
 * @s: La chaîne principale à analyser
 * @accept: La chaîne contenant les caractères recherchés
 *
 * Return: Pointeur vers le premier caractère trouvé dans s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
