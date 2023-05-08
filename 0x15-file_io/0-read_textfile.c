#include "main.h"

/**
 * read_textfile - the main function of the program that
 * reads a textfile and prints
 * @filename: the file to be read
 * @letters: letters being read
 *
 * Return: w- when read and printed otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w;
	ssize_t t;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
