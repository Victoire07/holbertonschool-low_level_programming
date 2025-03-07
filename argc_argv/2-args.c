#include <stdio.h>

/**
 * main -  Programme qui imprime tous les arguments qu'il reçoit
 * @argc: argument count (nombre)
 * @argv: argument vector (unused) (vecteur)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
