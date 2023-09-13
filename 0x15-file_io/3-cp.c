#include"main.h"
/**
 * er_h - Print an error message to the standard error stream and exit.
 * @exit_code: The exit code to use when exiting the program.
 * @exit_message: The error message to print.
 * @arg: Argument to insert into the error message.
 */
void er_h(int exit_code, const char *exit_message, const char *arg)
{
	dprintf(STDERR_FILENO, exit_message, arg);
	exit(exit_code);
}
/**
 * cl_f - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to be closed.
 * @filename: The name of the file associated with the descriptor.
 *
 * Return: 0 on success, -1 on failure.
 */
int cl_f(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd for %s: %s\n",
filename, strerror(errno));
		return (-1);
	}
	return (0);
}
/**
 * main - Entry point for the file copy program.
 * @argc: The number of command_line arguments.
 * @argv: An array of strings containing the command_line arguments.
 * Return: 0 on success, or an error code (97-100) on failure
 * with the corresponding error messages.
 */
int  main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		er_h(97, "Usage: cp file_from file_to\n", "");
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		er_h(98, "Error: Can't read from file %\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (fd_to == -1)
	{
		er_h(99, "Error: Can't write to %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			er_h(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		er_h(98, "Error: Can't read from file %s\n", file_from);
	}
	if (cl_f(fd_from, file_from) == -1 || cl_f(fd_to, file_to) == -1)
	{
		er_h(100, "Error: Can't close fd %s\n", "");
	}
	return (0);
}
