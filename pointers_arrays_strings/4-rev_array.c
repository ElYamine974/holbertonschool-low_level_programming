#include "main.h"
/**
 * reverse_array - unction that copies a string
 * @a: pointer to the array
 * @n: size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int t;
for (i = 0; i * 2 < n; i++)
{
t = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = t;
}
}
