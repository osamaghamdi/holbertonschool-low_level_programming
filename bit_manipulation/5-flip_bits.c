#include "main.h"

/**
 * flip_bits - flip num
 * @n: number 1
 * @m: number 2
 * Return: necessary number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m, bits = 0;
while (flip > 0)
{
bits += (flip & 1);
flip >>= 1;
}
return (bits);
}
