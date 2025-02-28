#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chai®ne de caratere
 * @s: Pointeur vers la chaÃ®ne de caraters
 *
 * Return: Longueur de la chaine
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}

	return (longueur);
}

