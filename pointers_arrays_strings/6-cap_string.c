#include "main.h"

/**
 * *cap_string - fonction qui met en majuscules tous les mots d'une string
 * @str: pointeur sur une chaine de cara (string)
 * Return: Valeur de la chaine de caracteres
 */

char *cap_string(char *str)
{
	int i  = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||
		str[i] == '\n' ||
		str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
