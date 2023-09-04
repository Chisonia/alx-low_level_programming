#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of s file.
 * @filename: name of file to append to.
 * @text_content: a NULL terminated string to add to the end of file.
 *
 * Return: 1 on success -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	written_bytes = write(fd, text_content, len);

	if (fd == -1 || written_bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
