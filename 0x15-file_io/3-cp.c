#include"main.h"

/**
 * error_handler - Print an error message to the standard error streeam
 * and exit the program with a specified exit code.
 *
 * @exit_code: The exit code to use when exiting the program.
 * @exit_message: The error message to print.
 * @arg: Argument to insert into the error message.
 */

void error_handler(int exit_code, const char *exit_message, const char *arg)
{
	dprintf(STDERR_FILENO, exit_message, arg);
	exit(exit_code);
}
/**
 * main - Entry point for the file copy program.
 *
 * @argc: The number of command_line arguments.
 * @argv: An array of strings containing the command_line arguments.
 *
 * Return: 0 on success, or an error code (97-100) on failure
 * with the corresponding error messages.
 */
int  main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_handler(97, "Usage: cp file_from file_to\n", "");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_handler(98, "Error: Can'r read from file %\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY |O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_handler(99,"Error: Can't write to %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_handler(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		error_handler(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd_from) == 1 || close(fd_to) == -1)
	{
		error_handler(100, "Error: Can't close fd\n", "");
	}
	return (0);
}
