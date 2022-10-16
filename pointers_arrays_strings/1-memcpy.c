#include "main.h"
/**
 * _memcpy - _memcpy
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: spaces to fill
 * Return: pointer to the string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
