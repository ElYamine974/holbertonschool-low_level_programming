#include "main.h"
/**
* times_table - times_table
* Return: void
*/
void times_table(void)
{
int i, j, tmp;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (i * j < 10)
{
_putchar(' ');
}
}
tmp = i * j;
if (tmp < 10)
{
_putchar(('0' + tmp));
}
else
{
_putchar(('0' + tmp / 10));
_putchar(('0' + tmp % 10));
}
}
_putchar('\n');
}
}
