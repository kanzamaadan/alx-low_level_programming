#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created by alloc_grid function.
 * @grid: the address of the two-dimensional grid
 * @height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

/*Check if the grid is not NULL*/
if (grid == NULL)
return;

/*Free each row of the grid*/
for (i = 0; i < height; i++)
{
/*Check if the row is not NULL*/
if (grid[i] != NULL)
{
/*Frees the columns of each row*/
free(grid[i]);
}
}

/*Free the array of pointers to rows*/
free(grid);
}
