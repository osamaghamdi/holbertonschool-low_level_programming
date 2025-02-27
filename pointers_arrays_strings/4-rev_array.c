#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: array of integers
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int temp, start = 0, end = n - 1;

while (start < end)
{

temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}
