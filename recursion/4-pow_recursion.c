#include "main.h"
/**
 * _pow_recursion - Fctn qui renvoie la valeur de x elevee a la puissance de y
 * @x: la base
 * @y: l'exposant
 *
 * Return: x^y ou -1 si y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
