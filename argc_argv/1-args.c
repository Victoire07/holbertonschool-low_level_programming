#include <stdio.h>

/**
 * main -  Programme qui imprime nombre arg fnctn suivi d'une nouvelle ligne
 * @argc: argument count (nombre)
 * @argv: argument vector (unused) (vecteur)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
