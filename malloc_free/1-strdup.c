#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a copy to a string
 * @str: str to copy
 * Return: copy of str
 */
char *_strdup(char *str)
{
char *retour;
int i = 0;
int len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
retour = malloc((len + 1) * sizeof(char));
if (retour == NULL)
{
return (NULL);
}
while (i < len)
{
retour[i] = str[i];
i++;
}
retour[i] = '\0';

return (retour);

}






