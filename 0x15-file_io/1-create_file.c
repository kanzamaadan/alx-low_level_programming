#include "main.h"  /* Include the header file */

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
/* Declare variables for file descriptor and write result */
int o, w, len = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);
/* Calculate the length of the text content */
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
/* Open file with specified permissions, truncate if already exists */
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/* Write the text content to the file */
w = write(o, text_content, len);
/* Check for errors in opening or writing to the file */
if (o == -1 || w == -1)
return (-1);  /* Return -1 if an error occurs */
/* Close the file */
close(o);
/* Return 1 to indicate success */
return (1);
}
