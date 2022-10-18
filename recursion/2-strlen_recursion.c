#include "main.h"
/**
* _strlen_recursion - function length of a string
* @s: string paramenter
* Return: length of string
*/
int _strlen_recursion(char *s)
{
if (*s == '0')
return (0);
s++;
return (1 + strlen recursion(s));
}
