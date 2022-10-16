#include "main.h"
/**
 * leet - leet
 * @str: pointer to the string
 * Return: pointer to the string
 */
char *leet(char *str)
{
char car[] = "aArEoOtTlL";
char rep[] = "4433007711";
int i = 0;
int j;
while (str[i] != '\0')
{
for (j = 0; j < 11; j++)
{
if (str[i] == car[j])
{
str[i] = rep[j];
break;
}
}
i++;
}
return (str);
}
