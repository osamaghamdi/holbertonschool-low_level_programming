#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{

int p_sum = 0;
int s_sum = 0;
int i;

for (i = 0; i < size; i++)
{
p_sum += *(a + i * size + i);
s_sum += *(a + i * size + (size - 1 - i));
}

printf("%d, %d\n", p_sum, s_sum);

}
