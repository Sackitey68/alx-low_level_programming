#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * copy_file - copies one file to another
 * @filename: source file
 * @new_filename: dest file
 * Return: 0
 */
int copy_file(const char *filename, const char *new_filename)
{
	int fd, fd2, rd, wr, cl1, cl2;
	char buf[1024];

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s", filename);
		exit(98);
	}
	fd2 = open(new_filename, O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", new_filename);
		exit(99);
	}
	while ((rd = read(fd, buf, 1024)) > 0)
	{
		if (rd == -1)
			exit(98);
		wr = write(fd2, buf, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", new_filename);
			exit(99);
		}
	}
	cl1 = close(fd);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
