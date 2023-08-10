#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int multiply(char *num1, char *num2, char *result, int len1, int len2, int len_result);
int is_valid_number(char *num);

#endif /* MAIN_H */
