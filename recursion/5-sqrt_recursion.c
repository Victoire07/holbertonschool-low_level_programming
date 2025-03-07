#include "main.h"
/**
 * _sqrt_recursion - Fctn qui renvoie la racine carree naturel d'un nombre
 * @n: entier pour trouver la racine carree
 *
 * Return: la racine carree de n
 */

int _sqrt_recursion(int n)
{
    if (n <= 0)
    {
        return (-1);
    }
    return (square_root(n, 0));
}
int square_root(int x, int y)
{
    if (y * y > x)
    {
        return (-1);
    }
    else if (y * y == x)
    {
        return (y);
    }
    else
    {
        return (square_root(x, y + 1));
    }
    return (1);
}



