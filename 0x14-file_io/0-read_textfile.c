#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file
 *@filename: pointer to a file name
 *@letters: letters
 *
 *
 *Return: Zero if file can not be open
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int n;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters); /*finding the nuber of letters*/
	if (buff == NULL)
		return (0);

	n = read(fd, buff, letters);
	if (n == -1)
		return (0);
	n = write(STDOUT_FILENO, buff, n);
	if (n == -1)
		return (0);
	return (n);
}
