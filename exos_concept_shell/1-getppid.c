#include "main.h"

/**
 * main - Fonction qui va aficher le PPID du processus courant
 * Return: Always 0
 */
int main(void)
{
	pid_t mon_ppid = getppid();

	printf("%d\n", mon_ppid);
	return (0);

}
