#include "main.h"

/**
 * _strcmp - fonction qui compare 2 chaines de cars (strings)
 *@s1: 1ere chaine de caracteres a comparer
 *@s2: 2eme chaine de caracteres a comparer
 *
 * Return: 0 int donc entier
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);

}
