#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
