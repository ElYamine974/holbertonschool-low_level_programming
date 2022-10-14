#include "main.h"
/**
 * _strcmp - unction that copies a string
 * @s1: pointer to the s1 string
 * @s2: pointer to the s2 string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
