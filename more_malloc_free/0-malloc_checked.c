#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory using malloc
 * @b: number of byte
 * Return: pointer to momery
 */

void *malloc_checked(unsigned int b)
{

if (malloc(b) == NULL)
exit(98);

return (malloc(b));

}
