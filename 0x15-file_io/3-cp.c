#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - Prints an error message to stderr and exits with a status.
 * @msg: The error message to print.
 * @status: The exit status.
 */
void error_exit(char *msg, int status)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(status);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return: 0 on success, or an exit status on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t nread, nwritten;
char buf[1024];

if (argc != 3)
error_exit("Usage: cp file_from file_to", 97);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit("Error: Can't read from file", 98);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit("Error: Can't write to file", 99);

while ((nread = read(fd_from, buf, sizeof(buf))) > 0)
{
nwritten = write(fd_to, buf, nread);
if (nwritten == -1 || nwritten != nread)
error_exit("Error: Can't write to file", 99);
}

if (nread == -1)
error_exit("Error: Can't read from file", 98);

if (close(fd_from) == -1 || close(fd_to) == -1)
error_exit("Error: Can't close fd", 100);

return (0);
}
