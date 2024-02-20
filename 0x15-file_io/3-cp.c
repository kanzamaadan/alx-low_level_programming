#include "main.h"  /* Include the header file */
#include <stdio.h> /* Include standard input-output library */
#include <stdlib.h> /* Include standard library */
#include <unistd.h> /* Include POSIX API for system calls */
#include <fcntl.h> /* Include file control options */


/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer; /* Declare a pointer to buffer */
/* Allocate memory for buffer */
buffer = malloc(sizeof(char) * 1024);

/* Check if memory allocation fails */
if (buffer == NULL)
{
/* Print error message to standard error */
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99); /* Exit program with error code 99 */
}
return (buffer); /* Return pointer to the allocated buffer */
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
int c; /* Declare variable to store close result */

c = close(fd); /* Close the file descriptor */

/* Check if closing the file descriptor fails */
if (c == -1)
{
/* Print error message to standard error */
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100); /* Exit program with error code 100 */
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or can't be read-exit code 98.
 *              If file_to can't be created or written to-exit code 99.
 *              If file_to or file_from can't be closed-exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, r, w;/* Declare variables */
char *buffer; /* Declare pointer to buffer */
if (argc != 3)/* Check if the number arguments is correct */
{
/* Print error message to standard error */
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); /* Exit program with error code 97 */
}
buffer = create_buffer(argv[2]);/* Create buff for file content */
from = open(argv[1], O_RDONLY); /* Open file_from for reading */
r = read(from, buffer, 1024); /* Read file content into buffer */
/* Open file_to for writing */
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
/* Loop to read and write file content */
do {
if (from == -1 || r == -1)/* Check for errors reading from file_from */
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer); /* Free allocated memory */
exit(98); /* Exit program with error code 98 */
}
w = write(to, buffer, r);/*Write buf content to file_to */
if (to == -1 || w == -1)/*Check for erors writing to file_to*/
{
/* Print error message to standard error */
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer); /* Free allocated memory */
exit(99); /* Exit program with error code 99 */
}
r = read(from, buffer, 1024); /* Read next chunk of file content */
to = open(argv[2], O_WRONLY | O_APPEND); /* Open file_to for appending */
} while (r > 0); /* Continue loop until end of file_from is reached */
free(buffer); /* Free allocated memory */
close_file(from); /* Close file_from */
close_file(to); /* Close file_to */
return (0); /* Return 0 to indicate success */
}
