#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	fd = open(filename, O_CREAT | O_TRUNC, 0600 | O_RDWR);
	w = write(fd, text_content, i);
	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
