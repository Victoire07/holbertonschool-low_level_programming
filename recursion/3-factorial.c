#include "main.h"
/**
 * factorial - Fonction qui renvoie la factorielle d'un nombre donne
 * @n: Le nombre dont il faut calculer la factorielle
 *
 * Return: La factorielle de n, ou -1 si n est negatif
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
