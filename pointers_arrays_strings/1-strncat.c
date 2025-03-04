#include "main.h"

/**
 * _strncat - Concatene deux chaines de caracteres jusqu'a un maximum de n caracteres
 * @dest: La chaine de destination a laquelle `src` sera ajoutee
 * @src: La chaine source qui sera ajoutee a `dest`
 * @n: Le nombre maximal de caracteres de `src` a concatener
 *
 * Description: Cette fonction ajoute au maximum `n` caracteres de `src` a `dest`,
 * en s'assurant que `dest` reste termine par un caractere nul (`\0`).
 * Si `src` contient moins de `n` caracteres, seuls les caracteres disponibles
 * seront ajoutes. La fonction suppose que `dest` dispose d'assez d'espace pour
 * contenir le resultat de la concatenation.
 *
 * Return: Un pointeur vers la chaine `dest` apres concatenation
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
