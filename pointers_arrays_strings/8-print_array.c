#include "main.h"
#include <stdio.h>
/**
 * print_array -  function that prints every older character of a
 * string, starting with the first character, followed by a new line.
 * @a: pointer to  array of integers
 * @n: nombre of element to print
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != 0)
{
printf(" ,");
}
printf("%d", a[i]);
}
printf("\n");
}
