#include "main.h"
/**
* print_last_digit -> prints the last digit
* @n: the passed args
* Return: the last digit
*/
int print last digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
