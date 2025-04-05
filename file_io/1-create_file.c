#include "main.h"

/**
 * create_file - Créer une fonction qui crée un fichier
 * @filename: nom de fichier
 * @text_content: texte à écrire
 * Return: 1 en cas de succès, -1 en cas d'échec
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	close(fd);
	return (1);
}
