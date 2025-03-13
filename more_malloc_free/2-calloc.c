#include "main.h"

/**
 * _calloc - fctn qui alloue de la memoire pour un tableau, en utilisant malloc
 * @nmemb: Nombre d'elements dans le tableau
 * @size: Taille de chaque élèments en octets
 *
 * Return: Pointeur vers la memoire allouee, ou NULL en cas d'echec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	char *ptr;
	unsigned int index = 0;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	total_size = (size_t)nmemb * (size_t)size;

	if (total_size / nmemb != size)
	{
		return (NULL);
	}

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < (total_size); index++)
	{
		{
			*(ptr + index) = 0;
		}
	}

	return (ptr);
}





