#include "main.h" /* Include the header file */

#include <stdlib.h> /* Include the standard library */

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
/* Declare variables for file descriptors and return values */
ssize_t o, r, w;
/* Declare a buffer to store file content */
char *buffer;
/* Check if filename is NULL */
if (filename == NULL)
return (0); /* Return 0 if filename is NULL */
/* Allocate memory for the buffer */
buffer = malloc(sizeof(char) * letters);
/* Check if memory allocation fails */
if (buffer ==  NULL)
return (0); /* Return 0 if memory allocation fails */
/* Open the file for reading */
o = open(filename, O_RDONLY);
/* Read content from the file into the buffer */
r = read(o, buffer, letters);
/* Write the content from the buffer to stdout */
w = write(STDOUT_FILENO, buffer, r);
/* Check for errors in opening, reading, or writing */
if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer); /* Free allocated memory */
return (0); /* Return 0 if an error occurs */
}
/* Free allocated memory */
free(buffer);
/* Close the file */
close(o);
/* Return the number of bytes written */
return (w);
}

