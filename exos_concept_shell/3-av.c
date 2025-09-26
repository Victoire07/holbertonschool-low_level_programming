#include "main.h"

/**
 * main - Fonction principale permetant dafficher les args passés
 * @ac: Argument count donc nombre d'args passés
 * @av: Tableau contenant les arguments
 * Return: 0 always
 */
int main(int ac, char **av)
{
	int i = 0;
	(void)ac;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
