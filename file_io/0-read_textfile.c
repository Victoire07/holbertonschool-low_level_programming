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
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten < 0 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytesWritten);
}
