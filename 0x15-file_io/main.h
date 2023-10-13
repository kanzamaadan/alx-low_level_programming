#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define ELF_HEADER_SIZE 64
#define BUFFER_SIZE 1024

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(const char *src, const char *dest);
int elf_header(const char *filename);
void error_exit(const char *message);

#endif /* MAIN_H */
