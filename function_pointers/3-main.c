#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculator
 * @argc: number of arguments
 * @argv: arguments
 * Return: result
*/

int main(int argc, char *argv[])
{
int num1, num2;
char *p;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
p = argv[2];

if (get_op_func(p) == NULL || p[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*p == '/' && num2 == 0) || (*p == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(p)(num1, num2));

return (0);
}
