#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number
 * @argv: Array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{

int sum = 0;
char *n;

while (--argc)
{
n = argv[argc];

if (*n == '-')
n++;

while (*n)
{
if (*n < '0' || *n > '9')
{
printf("Error\n");
return (1);
}
n++;
}
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
