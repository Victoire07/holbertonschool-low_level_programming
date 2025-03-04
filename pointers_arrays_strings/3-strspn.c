#include "main.h"
#include <stdio.h>
/**
 * _strspn - Retourne la longueur du segment initial d1 chaine
 *           contenant uniquement les caracteres acceptes
 * @s: La chaine principale a analyser
 * @accept: La chaine contenant les caracteres valides
 *
 * Return: Longueur du segment initial de s contenant accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s)
	{
		int j;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
            {
		    count++;
		    break;
	    }
		}
		if (accept[j] == '\0')
			return count;
		s++;
	}
	return count;
}
