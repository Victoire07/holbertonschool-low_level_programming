#include "main.h"

/**
 * main - Fonction à faire après mon Betty
 * Return: 0 always
 */

/** extern char **environ; : utile pour la fonction, défini dans mon main.h */

int main(void)
{
	pid_t pid_enfant;
	int i = 0;
	int statut;
	char *arguments[] = {"/bin/ls", "-l", "/tmp", NULL};


	while (i < 5)
	{
		pid_enfant = fork();

		if (pid_enfant == -1)
		{
			perror ("fork");
			return (-1);
		}
		else if (pid_enfant == 0)
		{
			execve(arguments[0], arguments, environ == -1);
			perror ("execve");
			exit (1);
		}
		else
		{
			wait(&statut);
			i++;
		}
	}
	return (0);
}
