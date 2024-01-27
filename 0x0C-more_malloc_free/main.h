#ifndef MAIN_H
#define MAIN_H

/* Function prototype */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *malloc_checked(unsigned int b);
char *multiply(char *num1, char *num2);
int _isdigit(char c);
int _strlen(char *str);
void print_error(void);
int validate_input(int argc, char *argv[]);
char *multiply(char *num1, char *num2);


#endif /* MAIN_H */
