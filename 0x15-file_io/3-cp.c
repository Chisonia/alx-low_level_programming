#include"main.h"

/**
 * error_handler - Print an error message to the standard error streeam
 * and exit the program with a specified exit code.
 *
 * @exit_code: The exit code to use when exiting the program.
 * @exit_message: The error message to print.
 */

void error_handler(int exit_code, const char *exit_message)
{
	dprintf(STDERR_FILENO, "%s\n", exit_message);
	exit(exit_code);
}
