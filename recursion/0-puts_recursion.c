#include "main.h"
/**
* _puts_recursion - function string the recursive
* @s: string parame
* puts_recursion(char *s)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{ 
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
