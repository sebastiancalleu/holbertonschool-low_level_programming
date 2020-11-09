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
 * append_text_to_file - this function adds text to the end of a file.
 * @filename: the filename.
 * @text_content: the text to add.
 * Return: 1 if success, -1 if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, b;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
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
