#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
*get_op_func - selects the correct function to perform
*the operation asked by the user. You’re not allowed
*to declare any other function.
*@s: operator passed as argument
*
*Return: A pointer to the function corresponding to
*the operator given in parameter
*/
/* Function to get the corresponding function for the operator */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};

/* Loop through the array of op_t to find the matching operator */
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}

/* If the operator is not found, return NULL */
printf("Error\n");
exit(99);
}
