#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: NULL-terminated string to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, nwritten;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
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
