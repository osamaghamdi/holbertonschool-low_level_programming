#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
return (-1);
else
return (n >> index & 1);
}
