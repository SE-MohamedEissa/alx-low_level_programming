#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 on succes -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t f, w;
	int i;

	i = 0;
	if (!filename)
		return (-1);
	while (text_content && text_content[i])
		i++;
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	w = write(f, text_content, i);
	close(f);
	return (w == -1 ? -1 : 1);
}
