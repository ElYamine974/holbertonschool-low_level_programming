#include "main.h"
/**
 * string_toupper - unction that copies a string
 * @str: pointer to the string
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] + 'A' - 'a';
}
i++;
}
return (str);
}
