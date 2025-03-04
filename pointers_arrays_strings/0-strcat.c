#include "main.h"

/**
 * _strcat - Concatene 2 chaine de caras
 * @dest: La chaine de cara à laquelle `src` sera ajouee.
 * @src: La chaine de cars à ajouter à `des
 *
 * Return: La chaîne `dest` après avoir ajouté la chaîne `
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	j = 0;

		while (dest[i] != '\0')
		{
			i++;
		}

		while (src[j] != '\0')
	{
			dest[i] = src[j];
			i++;
			j++;
	}
		dest[i] = '\0';
		return (dest);
}
