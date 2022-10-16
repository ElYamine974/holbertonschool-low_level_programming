#include "main.h"
/**
 * cap_string - cap_string
 * @str: pointer to the string
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
char Separators[] = " \n\t,;.!?\"(){}";
int toupper = 1;
int i = 0;
int j;
char c;
while (str[i] != '\0')
{
c = str[i];
for (j = 0; j < 14; j++)
{
if (c == Separators[j])
{
toupper = 1;
break;
}
}
if (toupper && c >= 'a' && c <= 'z')
{
str[i] = str[i] + 'A' - 'a';
toupper = 0;
}
else if (toupper && ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')))
{
toupper = 0;
}
i++;
}
return (str);
}
