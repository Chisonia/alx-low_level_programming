#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * main - Copies the contents of a file to another file.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success.
 *
 * Description: if the argument count is not correct - exit with code 97.
 * if file_from does not exist or cannot be opened or read - exit with code 98.
 * if file_to cannot be created or written to - exit the program with 99.
 * if file_to or file-from cannot be closed - exit the program with code 100.
 *
 *
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int source_fd;
	int dest_fd;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usuage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	source_fd = open(file_from, O_RDONLY);

	if (source_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	dest_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (dest_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", file_to);
		close(source_fd);
		return (99);
	}

	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", file_to);
			close(source_fd);
			close(dest_fd);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		close(source_fd);
		close(dest_fd);
		return (98);
	}

	close(source_fd);
	close(dest_fd);

	return (0);
}
