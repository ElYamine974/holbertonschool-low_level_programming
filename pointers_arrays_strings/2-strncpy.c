#include "main.h"
/**
 * _strncpy - unction that copies a string
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: nombre of carracter to cat
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (src[j] != '\0' && j < n)
{
dest[j] = src[j];
j++;
}
if (src[j] == '\0')
{
dest[j] = '\0';
}
return (dest);
}
