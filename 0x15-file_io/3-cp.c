#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define S_RW_RW_R (S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH)

/**
 * error_close - close fds
 * @fd1: file descriptor
 * @fd2: file descriptor
 */
void error_close(int fd1, int fd2)
{
	if (fd1 >= 0 && close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (fd2 >= 0 && close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
}

/**
 * error_exit - close fds
 * @message: message to print
 * @filename: filename
 * @exit_status: exit status
 */
void error_exit(const char *message, const char *filename, int exit_status)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_status);
}

/**
 * cp - copy file content
 * @fd_from: fd from
 * @fd_to: fd to
 * @from: from filename
 * @to: to filename
 */
void cp(int fd_from, int fd_to, const char *from, const char *to)
{
	char buff[1024];
	ssize_t read_bytes;
	ssize_t written_bytes;

	while (1)
	{
		read_bytes = read(fd_from, buff, 1024);
		if (read_bytes == 0)
			break;
		if (read_bytes < 0)
		{
			error_close(fd_from, fd_to);
			error_exit("Error: Can't read from file", from, 98);
		}
		written_bytes = write(fd_to, buff, read_bytes);
		if (written_bytes != read_bytes)
		{
			error_close(fd_from, fd_to);
			error_exit("Error: Can't write to file", to, 99);
		}
	}
}

/**
 * main - cp
 * @ac: args count
 * @av: args value
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from;
	int fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_exit("Error: Can't read from file", av[1], 98);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_RW_RW_R);
	if (fd_to == -1)
	{
		error_close(fd_from, fd_to);
		error_exit("Error: Can't write to file", av[2], 99);
	}
	cp(fd_from, fd_to, av[1], av[2]);
	error_close(fd_from, fd_to);
	return (0);
}
