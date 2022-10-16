#include "main.h"
/**
 * _strspn - _strspn
 * @s: pointer to the string
 * @accept: pointer to the accepted character string
 * Return:  number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int test;

while (*(s + i) != '\0')
{
test = 0;
j = 0;
while (*(accept + j) != '\0')
{
if (*(accept + j) == *(s + i))
{
test = 1;
break;
}
j++;
}
if (!test)
{
break;
}
i++;
}
return (i);
}
