#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le deuxième entier
 *
 * Return: /
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
