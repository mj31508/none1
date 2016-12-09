#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>

/**
 *main - copy file to file
 *@nj: something
 *@mj: two differnet files
 *Return: 0 on success, exit when failed
 *
 **/

int main(int nj, char **mj)
{
	char buffer[1204];
	int max, joh, bytes, check;
	mode_t allow = S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH;

	if (nj != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (mj[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", mj[1], exit(98);
			if (mj[2] == NULL)
				dprint(STDERR_FILENO, "Error: Can't write to file %s\n", av[2], exit(99);
				       max = open(mj[1], O_RDONLY);
				       if (max = -1)
					       dprintf(STDERR_FILENO, "Error: Can't read from file %s\n" , mj[1], exit(98);
						       joh = open(mj[2], O_WRONLY | O_CREAT | O_TRUNC, allow);
						       if (joh == -1)
							       dprint(STDERR_FILENO, "Error: Can't read from file %s\n", mj[2], exit(99);

								      check = bytes = 1;
								      while (bytes)
								      {
									      bytes = read(max, buffer, 1204);
									      if (bytes == -1)
										      dprint(STDERR_FILENO, "Error: Can't read from file %s\n", mj[1], exit(98);
											     if (bytes > 0)
											     {
												     check = write(joh, buffer, bytes);
												     if (check == -1)
													     dprintf(STDERR_FILENO, "Error: Can't write to %s\n", mj[2], exit(9);
											     }
								      }
											     check = close(max);
											     if (check == -1)
												     dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", joh), exit(100);
											     return (0);
}
