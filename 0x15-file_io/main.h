#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/*3-cp.c*/
char *create_buffer(char *file);/* Declare func for creating buff */
void close_file(int fd);/* Declare func for closing file descriptors */
/*task 4*/
void my_check_elf(unsigned char *e_ident);
void my_magic(unsigned char *e_ident);
void my_class(unsigned char *e_ident);
void my_data(unsigned char *e_ident);
void my_version(unsigned char *e_ident);
void my_abi(unsigned char *e_ident);
void my_osabi(unsigned char *e_ident);
void my_type(unsigned int e_type, unsigned char *e_ident);
void my_entry(unsigned long int e_entry, unsigned char *e_ident);
void my_close_elf(int elf);

#endif /* MAIN_H */
