#include "main.h"
#include <stdlib.h>

/**
 * array_range - min to max
 * @min: first value of array
 * @max: last value of array
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
int *arr, i, s;

if (min > max)
return (NULL);

s = max - min + 1;

arr = malloc(sizeof(int) * s);

if (arr == NULL)
return (NULL);

for (i = 0; i < s; i++)
arr[i] = min++;

return (arr);
}
