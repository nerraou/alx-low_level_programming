#include "main.h"

/**
 * read_textfile - read textfile
 * @filename: filename
 * @letters: letters to read
 * Return: count
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char str[32];
	ssize_t size;
	size_t to_read;
	size_t count;
	ssize_t read_bytes;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = 0;
	to_read = 32;
	while (count < letters)
	{
		if (letters - count < to_read)
			to_read = letters - count;
		read_bytes = read(fd, str, to_read);
		if (read_bytes == 0)
			return (count);
		if (read_bytes < 0)
			return (0);
		size = write(STDOUT_FILENO, str, read_bytes);
		if (size <= 0 || size < read_bytes)
			return (0);
		count += read_bytes;
	}
	return (count);
}
