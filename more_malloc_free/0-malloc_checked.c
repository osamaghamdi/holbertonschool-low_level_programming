#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory using malloc
 * @b: number of byte
 * Return: pointer to momery
 */

void *malloc_checked(unsigned int b)
{

void *m = malloc(b);

if (m == NULL)
exit(98);

return (m);

}
