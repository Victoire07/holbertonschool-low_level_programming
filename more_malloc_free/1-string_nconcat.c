#include "main.h"

/**
 * string_nconcat - fonction qui concatene deux chaines de caracteres
 * @s1: 1er caractere a concatener
 * @s2: 2eme caractere a concatener
 *  @n: Nombre maximum de caracteres a prendre de s2
 *
 * Return: Pointeur vers nvl chaine contenant s1 suivi
 * des n 1ers caracteres de s2, terminée par '\0'
 * Retourne NULL en cas d'échec d'allocation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, concat_length, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)

	for (len2 = 0; s2[len2] != '\0'; len2++)

	concat_length = (n >= len2) ? len2 : n;

	result = malloc(sizeof(char) * (len1 + concat_length + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < concat_length; j++)
		result[i + j] = s2[j];

	result[i + concat_length] = '\0';

	return (result);
}
