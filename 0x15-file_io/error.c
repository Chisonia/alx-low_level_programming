#include "main.h"

/**
 * main - Entry point for the file copy program.
 *
 * @argc: The number of command_line arguments.
 * @argv: An array of strings containing the command_line arguments.
 *
 * Return: 0 on success, or an error code (97-100) on failure
 * with corresponding error messages.
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[1024];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t bytes_read = 0;
	ssize_t bytes_written = write(fd_to, buffer, bytes_read);

	if (argc != 3)
	{
		error_handler(97, "Usage: cp file_from file_to");
	}
	if (fd_from == -1)
	{
		error_handler(98, "Error: Can't read from file NAME_OF_THE_FILE");
	}
	if (fd_to == -1)
	{
		error_handler(99, "Error: Can't write to NAME_OF_THE_FILE");
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (bytes_written == -1)
		{
			error_handler(99, "Error: Can't write to NAME_OF_THE_FILE");
		}
		if (close(fd_from) == -1 || close(fd_to) == -1)
		{
			error_handler(100, "Error: Can't close fd FD_VALUE");
		}
	}
	return (0);
}
