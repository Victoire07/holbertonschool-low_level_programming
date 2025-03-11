#include "main.h"
/**
 * create_array -cree un tableau de cara et l'initialise avec un cara specif
 * @size: La taille du tableau a creer
 * @c: Le caractere a utiliser pour initialiser un tableau
 * Return: NULL if size = 0, Returns a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;
	return (array);
}
