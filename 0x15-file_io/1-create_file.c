#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: text content
 * Return: 1 / -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	size = write(fd, text_content, strlen(text_content));
	close(fd);
	if (size <= 0)
		return (-1);
	return (1);
}
