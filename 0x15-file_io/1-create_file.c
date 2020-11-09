#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
int _strlen(char *);
/**
 * create_file - this function creates a file.
 * @filename: name of the file.
 * @text_content: content of the text.
 * Return: 1 if success  or -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, b;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		b = write(fd, text_content, 0);
	else
		b = write(fd, text_content, _strlen(text_content));
	if (b == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _strlen - this function calculates the lenght of a string.
 * @s: the string.
 * Return: the count.
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
	{
	}
	return (a);
}
