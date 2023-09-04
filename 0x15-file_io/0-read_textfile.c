#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a textfile and prints to STDOUT.
 * @filename: textfile being read.
 * @letters: number of letters to be read.
 * Return: actual number of letters it could read or print.
 *        0 file cannot open or read.
 *        0 file name is NULL.
 *        0 if write fails or does not write expected amount of  bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t actual_num_letters;
	ssize_t r;

	fd = open(filename, O_RDONLY);

        if (fd == -1)
                return (0);


	buff = malloc(sizeof(char) *letters);
	r = read(fd, buff, letters);
       actual_num_letters = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (actual_num_letters);
}
