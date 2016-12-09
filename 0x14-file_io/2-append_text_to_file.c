#include "holberton.h"
#include <fcntl.h>

/**
 *append_text_to_file - function that appends a text at the end of a file
 *@filename: name of the file
 *@text_content: number of letters o print
 *
 *Return: 1 on success and -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, check, bers;
	mode_t m;

	m = S_IRUSR | S_IWUSR;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, m);
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
