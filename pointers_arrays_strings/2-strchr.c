#include <stdlib.h>
#include "main.h"
/**
 * _strchr - _strchr
 * @s: pointer to the dest string
 * @c: character to found
 * Return:  pointer to the first occurrence of the
 * character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
return (s + i);
}
i++;
}
if (*(s + i) == c)
{
return (s + i);
}  
return (NULL);
}
