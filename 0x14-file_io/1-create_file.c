#include "holberton.h"

/**
 *create_file - creating a new file
 *@text_content: character
 *@filename: name of the file
 *
 *Return: something
 **/

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, check, bers;
	mode_t m;

	m = S_IRUSR | S_IWUSR;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, m);
	if (fd == -1)
		return (-1);
	if (text_content == '\0')
	{
		close(fd);
		return (1);
	}

	bers = 0;
	while (text_content[bers])
		bers++;
	if (bers > 0)
		check = write(fd, text_content, bers);
	close(fd);
	if (check == -1)
		return (-1);
	return (1);
}
