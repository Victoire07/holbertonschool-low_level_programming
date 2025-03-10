#include "main.h"

/**
 * *leet -  fonction qui encode une chaine de caracteres en 1337
 * @str: string a encoder
 * Return: Le resultat de la string
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
			}
		}
	}
	return (str);
}
