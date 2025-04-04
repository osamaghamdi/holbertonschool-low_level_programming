#include "main.h"

/**
 * set_bit - sets value of bit at index 1
 * @n: pointer to the bit
 * @index: index to set value at 0
 * Return: bits
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n ^= (1 << index);

return (1);

}
