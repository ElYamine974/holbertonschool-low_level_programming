#include "main.h"
/**
 * puts_half -  function that prints every older character of
 * a string, starting with the first character, followed by a new line.
 * @str: pointer to the first char of the string
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int n;
while (str[i] != '\0')
{
i++;
}

if (i % 2 == 1)
{
n = (i - 1) / 2;
}
else
{
n = i / 2;
}
for (; n < i; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
