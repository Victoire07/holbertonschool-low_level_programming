#include <stdio.h>
#include <stdlib.h>


/**
 * main -  Programme qui imprime tous les arguments qu'il recoit
 * @argc: argument count (nombre)
 * @argv: argument vector (unused) (vecteur)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number1;
	int number2;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

printf("%d\n", number1 * number2);
return (0);

}
