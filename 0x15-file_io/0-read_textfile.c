#include "main.h"

/**
 * read_textfile-function
 * @filename: name of the file
 * @letters: number of letters
 * Return: size of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c = malloc(letters);
	ssize_t x, size, fd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	x = read(fd, c, letters);
	size = write(STDOUT_FILENO, c, x);
		close(fd);
	return (size);
}
