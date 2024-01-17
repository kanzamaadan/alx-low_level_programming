#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of ints.
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to the allocated 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;/* variable to store the 2D array*/
int i, j;

/*Check if width or height is 0 or negative*/
if (width <= 0 || height <= 0)
return (NULL);

/*Allocate memory for the rows*/
grid = (int **)malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);  /*Return NULL on failure*/

/*Allocate memory for the columns*/
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/*Free previously allocated memory on failure*/
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}

/*Initialize each element to 0*/
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
grid[i][j] = 0;

return (grid);
}
