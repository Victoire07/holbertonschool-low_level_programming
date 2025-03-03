#include "main.h"
#include <stddef.h>

/**
 * _atoi - Convertit une chaine en entier
 * @s: La chaine a convertir
 *
 * Return: L'entier extrait de la chaine, ou 0 si aucun chiffre nest prsnt
 */
int _atoi(char *s)
{
	int sign = 1; /* Signe du nombre (positif par defaut!) */
	int num = 0;

	if (s == NULL) /* ici if verifie si la chaine est nul donc NULL */
	return (0);

	while (*s == ' ') /* permet dignorer les espaces dou le ' ' */
	s++;

	while (*s == '+' || *s == '-') /* Les signes + et - */
	{
	if (*s == '-')
	sign *= -1; /* permet de inverser les signes si ya le - */
	s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}
