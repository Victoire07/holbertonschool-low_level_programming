#include "main.h"

/**
 * _strncat - Concatene 2 chaine de caras
 * @dest: La chaine de cara |  laquelle `src` sera ajouee.
 * @src: La chaine de cars© |  ajouter |  `de
 * @n: Le nbre maximal de caras de src a conctaner
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
