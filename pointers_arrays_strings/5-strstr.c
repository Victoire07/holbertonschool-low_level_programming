#include "main.h"
#include <stdio.h>
/**
 * _strstr - Recherche une sous chaine
 * @s: La chaine dans laquelle rechercher
 * @accept: La sous chaine | localiser
 *
 * Return: Pointeur vers le debut de la ss chaine trouvee, ou NULL si nn trouve
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
