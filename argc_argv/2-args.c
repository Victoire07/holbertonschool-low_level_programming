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
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
