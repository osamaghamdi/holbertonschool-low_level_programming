#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to 2-dimensional array
 * @width: width 2-dimensional array.
 * @height: height 2-dimensional array
 * Return: pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{

int **hh;
int hgt, wid;

if (width <= 0 || height <= 0)
return (NULL);

hh = malloc(sizeof(int *) * height);

if (hh == NULL)
return (NULL);

for (hgt = 0; hgt < height; hgt++)
{
hh[hgt] = malloc(sizeof(int) * width);

if (hh[hgt] == NULL)
{
for (; hgt >= 0; hgt--)
free(hh[hgt]);

free(hh);
return (NULL);
}
}

for (hgt = 0; hgt < height; hgt++)
{
for (wid = 0; wid < width; wid++)
hh[hgt][wid] = 0;
}

return (hh);
}
