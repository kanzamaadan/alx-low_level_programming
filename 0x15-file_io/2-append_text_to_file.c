#include "main.h"  /* Include the header file */

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL -1
 *         If file does not exist or user lacks write permissions -1
 *         Otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
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
/* Open the file for appending */
o = open(filename, O_WRONLY | O_APPEND);
/* Write the text content to the end of the file */
w = write(o, text_content, len);
/* Check for errors in opening or writing to the file */
if (o == -1 || w == -1)
return (-1);  /* Return -1 if an error occurs */
/* Close the file */
close(o);
/* Return 1 to indicate success */
return (1);
}
