#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: what to include in the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t f, w;
	int i;

	i = 0;
	if (!filename)
		return (-1);
	while (text_content && text_content[i])
		i++;
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	w = write(f, text_content, i);
	close(f);
	return (w == -1 ? -1 : 1);
}
