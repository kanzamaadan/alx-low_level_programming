#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file being read.
 * @letters: Number of letters it should read and print.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwritten;
char *buf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(letters);
if (buf == NULL)
{
close(fd);
return (0);
}
nread = read(fd, buf, letters);
if (nread == -1)
{
free(buf);
close(fd);
return (0);
}
nwritten = write(STDOUT_FILENO, buf, nread);
if (nwritten == -1 || nwritten != nread)
{
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (nwritten);
}
