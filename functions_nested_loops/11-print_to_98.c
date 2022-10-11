#include "main.h"
#include <stdio.h>
/**
* print_to_98 - add two variables
* @n: start number
* Return: void
*/
void print_to_98(int n)
{
int i;
printf("%d", n);
for (i = n + 1; i <= 98; i++)
{
printf(", %d", i);
}
for (i = n - 1; i >= 98; i--)
{
printf(", %d", i);
}
printf("\n");
}
