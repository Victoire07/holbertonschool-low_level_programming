#include "main.h"
#include <stdio.h>
/**
 * _strstr - Recherche une sous chaine
 * @haystack: La string a chercher
 * @needle: La sous chaine a trouver
 *
 * Return: 1ptr sur1ere occrrencedelaiguilledansbotte2foin&NULLsi aig pastrouve
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);
	if (haystack == NULL)
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
