#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * main - this functions copy content to one file to other.
 * @ac: is the arg counter.
 * @av: is the arg strings.
 * Return: 0 if success.
 */

int main(int ac, char *av[])
{
	int fd, fd1, a, b, c1, c2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write from file %s\n", av[2]);
		exit(99);
	}
	do {
	a = read(fd, buf, 1024);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	b = write(fd1, buf, a);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write from file %s\n", av[2]);
		exit(99);
	}
	} while (a == 1024);
	c1 = close(fd);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%i\n", fd);
		exit(100);
	}
	c2 = close(fd1);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%i\n", fd1);
		exit(100);
	}
	return (0);
}
