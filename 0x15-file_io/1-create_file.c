#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - function that creates file.
 * @filename: name of file to create.
 * @text_content: a NULL terminated string to writ to  file.
 *
 * Return: 1 on success -1 on failure.
 * (file can not be created, file can not be written, write “fails”)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
{
	return (-1);
}

if (text_content != NULL)
{
	written_bytes = write(fd, text_content, strlen(text_content));
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}
}
close(fd);
return (1);
}
