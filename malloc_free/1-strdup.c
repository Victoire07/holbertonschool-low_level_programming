#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}




#include "main.h"

/**
 * *_strdup - Retourne un pointeur vers une copie allouee ds la chaine donnee
 * @str: Chaine de caracteres a copier
 * Return: Pointeur vers la nouvelle chaîne, ou NULL si échec
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str);

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}

	copy[length] = '\0';
	return (copy);
}
