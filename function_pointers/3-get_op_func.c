#include "3-calc.h"

/**
 * get_op_func -  selectionne la fonction correcte pour effectuer
 * l'operation demandee par l'utilisateur
 * @s: l'operateur donne en argument (sous forme de chaîne de caracteres)
 * Return: pointeur sur la fonction de l'operateur correspondant
 */

int (*get_op_func(char *s))(int, int)
{

int i = 0;

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};


while (ops[i].op != NULL)
{
	if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
	i++;
}
return (NULL);
}
