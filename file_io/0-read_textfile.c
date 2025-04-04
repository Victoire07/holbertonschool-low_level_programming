#include "main.h"

/**
 * read_textfile - lit un fich texte et l'imprime sur la sortie standard POSIX
 * @filename: Nom fichier
 * @letters: Le nombre de lettres à lire et à imprimer
 * Return: le nombre de lettres à lire et à impirmer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[letters];

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}

	ssize_t bytesRead = read(fd, buffer, letters);

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	close(fd);

	return (bytesWritten);
}


