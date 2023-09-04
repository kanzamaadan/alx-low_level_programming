#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a file and write text to it.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, nwritten;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
len = 0;
while (text_content[len])
len++;

nwritten = write(fd, text_content, len);
if (nwritten == -1 || nwritten != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
