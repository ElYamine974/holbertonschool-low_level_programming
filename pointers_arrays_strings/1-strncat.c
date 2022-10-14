#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: nombre of carracter to cat
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
