
#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: pointer to the first char of the string
 * Return: a integer
 */
int _atoi(char *s)
{
int res = 0;
int sign = 1;
int i = 0;

while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
{
if (s[i] == '-')
{
sign = sign * (-1);
}
i++;
}

while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
{
res = res * 10 + s[i] - '0';
i++;
}
return (sign *res);
}
