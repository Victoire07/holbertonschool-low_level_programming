#include <stdio.h>
#include <stdlib.h>
/**
 * main - Programme qui additionne des nombres positifs
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int somme = 0;
	int i,
	int j;
	int is_valid;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		is_valid = 1;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				is_valid = 0;
				break;
			}
		}

		if (is_valid)
		{
			somme += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", somme);
	return (0);
}
