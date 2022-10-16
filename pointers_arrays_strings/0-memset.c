#include "main.h"
/**
 * _memset - _memset
 * @s: pointer to the string
 * @b: byte to fill
 * @n: spaces to fill
 * Return: pointer to the string.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
