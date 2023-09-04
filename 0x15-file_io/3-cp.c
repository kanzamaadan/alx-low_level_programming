#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print an error message and exit with a specific exit code.
 * @exit_code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int exit_code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
 * main - Copy the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or a non-zero value on failure.
 */
int main(int argc, char *argv[])
{
int source_fd, dest_fd;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
error_exit(97, "Usage: cp file_from file_to");
}
source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
{
error_exit(98, "Error: Can't read from file");
}
dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (dest_fd == -1)
{
error_exit(99, "Error: Can't write to file");
}
while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
{
error_exit(99, "Error: Can't write to file");
}
}
if (bytes_read == -1)
{
error_exit(98, "Error: Can't read from file");
}
if (close(source_fd) == -1)
{
error_exit(100, "Error: Can't close source file");
}
if (close(dest_fd) == -1)
{
error_exit(100, "Error: Can't close destination file");
}
return (0);
}
