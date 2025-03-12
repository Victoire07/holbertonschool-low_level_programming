#include "main.h"

/**
 * malloc_checked - Fonction qui alloue de la memoire grace a malloc
 * @b: taille de la memoire a allouer
 * Return: Pointeur vers la memoire allouee
 * Si malloc echoue, terminer le programme  avec le statut 98
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}


