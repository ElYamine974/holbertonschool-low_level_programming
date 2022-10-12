#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer to the first char of the string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int len;
char c;
while (s[i] != '\0')
{
i++;
}
i--;
len = i;
for (; i >= (len / 2); i--)
{
c = s[len - i];
s[len - i] = s[i];
s[i] = c;
}
}
