#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/* Main function */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    /* Check if the number of arguments is correct */
    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    /* Convert command-line arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Get the operation function based on the operator */
    op_func = get_op_func(argv[2]);

    /* Perform the operation and print the result */
    result = op_func(num1, num2);
    printf("%d\n", result);

    return (0);
}
