#include "main.h"
#include <stdio.h>
/**
 * _strstr - Recherche une sous chaine 
 * @s: La chaine dans laquelle rechercher
 * @accept: La sous chaine | localiser
 *
 * Return: Pointeur vers le debut de la ss chaine trouvee, ou NULL si non trouve
 */

char *_strstr(char *haystack, char *needle)

if (needle[0] == '\0') 
{
	return haystack;
}
if (haystack == NULL) 
{
	return NULL;
}
for (int i = 0; haystack[i] != '\0'; i++)
{
}
{
	int j = 0;
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
			break;
	}
	
	if (needle[j] == '\0')
		return (&haystack[i]);
}
haystack++; /* Étape 7 : Avancer dans haystack */
}
return (NULL); /* Étape 8 : Si aucune correspondance trouvée */
}
