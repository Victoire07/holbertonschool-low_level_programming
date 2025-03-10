#include "main.h"

/**
* string_toupper -  transforme toutes les lettres min dune chaine en majuscules
* @str: Pointeur vers la chaine de caracteres à modifier
* Return: Pointeur vers la chaine modifiee
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] -= 32;
		}
	}
	return (str);
}
