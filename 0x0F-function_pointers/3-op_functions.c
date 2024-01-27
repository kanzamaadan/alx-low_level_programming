#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/* Function implementations */

int op_add(int a, int b) { return a + b; }
int op_sub(int a, int b) { return a - b; }
int op_mul(int a, int b) { return a * b; }

/* Check for division by 0 in op_div */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/* Check for division by 0 in op_mod */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
